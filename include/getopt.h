
#ifndef _P4MSVC_GETOPT_H_
#define _P4MSVC_GETOPT_H_

#ifdef DLLEXPORTS
#define P4W_API __declspec(dllexport)
#else
#define P4W_API __declspec(dllimport)
#endif

#ifdef  __cplusplus
extern "C" {
#endif

extern const int no_argument;
extern const int required_argument;
extern const int optional_argument;

P4W_API extern char* optarg;
P4W_API extern int optind, opterr, optopt;

struct option {
  const char* name;
  int has_arg;
  int* flag;
  int val;
};

extern int __cdecl getopt(int argc, char* const argv[], const char* optstring);

extern int __cdecl getopt_long(int argc, char* const argv[],
  const char* optstring, const struct option* longopts, int* longindex);
  


#ifdef  __cplusplus
}
#endif


#endif //_P4MSVC_GETOPT_H_