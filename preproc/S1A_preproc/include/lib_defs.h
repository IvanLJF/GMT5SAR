/* definitions for xml code */

int space_count(char *);
int strasign(char *, char *, int, int);
int strlocate(char *, int, int);
int create_child(tree *, char *, int, int, int);
int show_tree(tree *, int ,int);
int get_tree(FILE *, tree *, int);
int search_tree(tree *, char *, char *, int, int, int);
int cat_nums(char *, char *);
int str2ints(int *, char *);
double date2MJD(int, int, int, int, int, double);
int str_date2JD(char *, char *);
double str2double(char *);
int str2dbs(double *, char *);
int null_MEM_STR();
#ifndef WIN32
int itoa(int, char *, int);
#endif
