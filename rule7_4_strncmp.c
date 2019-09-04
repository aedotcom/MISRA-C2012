#include "test.h"

int Get_LOT_ID_From_String( const char *mdata , BOOL idalso )
{
int i;
//const char *mdata = mdata_str;
const char *mdata_str = "PORT";
char mdata_str1[] = "PORT";

if(0 == strncmp(mdata_str, "PORT" , 4))
{
  i = atoi( mdata + 4 ) - 1;
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}

if(0 == strncmp(mdata_str1, "PORT" , 4))
{
  i = atoi( mdata + 4 ) - 1;
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}

if(0 == strncmp(mdata, "PORT" , 4))
{
  i = atoi( mdata + 4 ) - 1;
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}

if      ( STRNCMP_L(mdata_str, "PORT" , 4 ) ) {
  i = atoi( mdata + 4 ) - 1;
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}
else if ( STRNCMP_L(mdata , "CM" , 2 ) ) {
  i = atoi( mdata + 2 ) - 1;
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}
else {
  if ( idalso ) { // 2006.11.17
    if ( ( mdata[0] >= '1' ) && ( mdata[0] <= '9' ) ) {
      i = atoi( mdata ) - 1;
      if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
    }
    else {
      i = -1;
    }
  }
  else {
    i = -1;
  }
}
return i;
}

int Get_LOT_ID_From_String2(  char *mdata , BOOL idalso )
{
int i;
//const char *mdata = mdata_str;
const char *mdata_str = "PORT";
char mdata_str1[] = "PORT";

if(0 == strncmp(mdata, "PORT" , 4))
{
  i = (int)(atoi( mdata + 4 ) - 1);
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}


if      ( STRNCMP_L(mdata, "PORT" , 4 ) ) {
  i = (atoi( mdata + 4 ) - 1);
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}
else if ( STRNCMP_L(mdata , "CM" , 2 ) ) {
  i = atoi( mdata + 2 ) - 1;
  if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
}
else {
  if ( idalso ) { // 2006.11.17
    if ( ( mdata[0] >= '1' ) && ( mdata[0] <= '9' ) ) {
      i = ((int)atoi( mdata ) - 1);
      if ( ( i < 0 ) || ( i >= 9 ) ) i = -1;
    }
    else {
      i = -1;
    }
  }
  else {
    i = -1;
  }
}
return i;
}


/*
BOOL STRNCMP_L( char *String1 , char *String2 , size_t Length )
{
	if ( _strnicmp( String1 , String2 , Length ) == 0 ) return TRUE;
	return FALSE;

}
*/
