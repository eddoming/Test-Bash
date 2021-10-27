typedef enum {
  FRESHAMN,
  SOPHOMORE,
  JUNIOR,
  SENIOR,
} Year;
// Unix timestamp
// ISO 8601
// date_t
typedef struct {
  int year;
  int month;
  int day;
} Date;

typedef struct {
  int newID;
  char * firstname;
  char * lastname;
  Year year;
  double gpa;
  Date dateofBirth;
} Student;
//Same as Java we create a constructor; like a pointer
Student *constructorStudent(int newID,
                            const char *firstname,
                            const char *lastname,
                            Year year,
                            double gpa,
                            int Dateyear,
                            int Datemonth,
                            int Dateday){
                            }
