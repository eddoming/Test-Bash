/********************************************
 * Author: Edgar Dominguez Rosas            *
 * email: sidej.rex@gmail.com               *
 *                                          *
 *                                          *
 *                                          *
*********************************************/
#include <iostream>
#include <stdio.h>
#include <string.h>

#include <openssl/ssl.h>
#include <openssl/bio.h>

#define MAX_BUFFER_SIZE 512
#define MAX_BUFFER_SIZE64 64
//g++ decode64.cpp -o bio_b64_decode -lcrypto -lssl -Wall
//./bio_b64_decode api.txt Check2.txt
int main(int argc, char *argv[])
{
    BIO *bioOut = NULL;
    BIO *bioIn = NULL;
    BIO *bioB64 = NULL;
    int inByte, outByte;
    char buffer[MAX_BUFFER_SIZE];
    memset(buffer,'\0',MAX_BUFFER_SIZE);

    if (argc != 3)
    {
        std::cout << "Usage : bio_b64_encode <source read> <encoded write>" << std::endl;
        return 1;   
    }

    bioIn = BIO_new_file(argv[1], "rb");
    //Alternative to load from a string
    //std::string apiKey = "asdsjahfgjgsfhashfhkhfsjdfkasdfhashdfkashdf==\n";
    //bio_in = BIO_new_mem_buf(apiKey.c_str(), -1); 
    bioOut = BIO_new_file(argv[2], "w");
    bioB64 = BIO_new(BIO_f_base64());

    BIO_push(bioB64,bioIn);
    while ((inByte = BIO_read(bioB64, buffer, MAX_BUFFER_SIZE)) > 0)
    {
        std::cout << inByte << std::endl;
        outByte = BIO_write(bioOut,buffer,inByte);
        if (inByte !=outByte)
        {
            std::cout <<"Error" <<std::endl;
            break;
        }
    }

    std::string message = "1234567890GET/users/self/verify";
    // Create a SHA-256 HMAC with the secret
    unsigned char hmacResult[EVP_MAX_MD_SIZE];
    unsigned int hmacLen;
    //HMAC(EVP_sha256(), buffer, static_cast<int>(MAX_BUFFER_SIZE), reinterpret_cast<const unsigned char*>(message.c_str()), message.size(), hmac_result, &hmac_len);
    HMAC(EVP_sha256(), buffer, static_cast<int>(MAX_BUFFER_SIZE), reinterpret_cast<const unsigned char*>(message.c_str()), message.size(), hmacResult, &hmacLen);

    // Base64-encode the signature
    BIO* bioOutMessage = BIO_new(BIO_s_mem());
    BIO* b64OutMessage = BIO_new(BIO_f_base64());
    bioOutMessage = BIO_push(b64OutMessage, bioOutMessage);
    BIO_write(bioOutMessage, hmacResult, hmacLen);
    BIO_flush(bioOutMessage);

    BUF_MEM* bioBuffer;
    BIO_get_mem_ptr(bioOutMessage, &bioBuffer);
    std::string signatureBase64(bioBuffer->data, bioBuffer->length - 1);
    BIO_free_all(bioOutMessage);

    std::cout << signatureBase64 << std::endl;

    BIO_flush(bioB64);
    BIO_free(bioOut);
    BIO_free_all(bioB64);
    return 0;
}