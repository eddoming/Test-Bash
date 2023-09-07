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
//g++ encode64.cpp -o bio_b64_encode -lcrypto -lssl -Wall
//./bio_b64_encode test_source.txt output_encode64.txt
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

    bioIn = BIO_new_file(argv[1], "r");
    bioOut = BIO_new_file(argv[2], "wb");
    bioB64 = BIO_new(BIO_f_base64());

    BIO_push(bioB64,bioOut);
    while ((inByte = BIO_read(bioIn, buffer, MAX_BUFFER_SIZE)) > 0)
    {
        outByte = BIO_write(bioB64,buffer,inByte);
        if (inByte !=outByte)
        {
            std::cout <<"Error" <<std::endl;
            break;
        }
    }
    BIO_flush(bioB64);
    BIO_free(bioIn);
    BIO_free_all(bioB64);
    return 0;
}