struct string
{
	int length;
	string(const char *s);
	operator const char *();
};

struct list
{
	int length;
	string operator[](int idx);
};

int echo(int on_or_off);
bool MustBuild(int trace,string objfile);
int exec(int check, ...);
int exists(const char * );
int exit(int st);
int fprintf(string fn,const char * fmt,...);
string get_ext(string fn);
string get_path(string fn);
int printf(const char* fmt,...);
string trim(const char * s);
string trimleft(const char * s);
string trimright(const char * s);
list  	fgets(string filenme,int offset);
int  		strfind(string haystack, string needle);
string  strformat(string fmt,...);
list  	strtok(string s,const char * sep);
string	strformat(const char * fmt,...);
string	substr(string s,int start,int len);
string	change_ext(const char * fn,const char * ext);

#define ON 1
#define OFF 0
#define P_CHECK 1
#define P_NOCHECK 0
#define younger <
#define older >
