#include <iostream>
using namespace std;

char* write_chars(char* dest, const char* st)
{
  

  return dest;
}

void escape(char* src, char *dest)
{
  
int x = 0;
for(int i = 0;src[i]!='\0';i++)
{
  if(src[i]=='<'){
    dest[x] = '&';
    dest[x+=1] = 'l';
    dest[x+=1] = 't';
    dest[x+=1] = ';';
	x+=1;
  }else if(src[i]=='>'){
    dest[x] = '&';
    dest[x+=1] = 'g';
    dest[x+=1] = 't';
    dest[x+=1] = ';';
	x+=1;
  }else if(src[i]=='\"'){
    dest[x] = '&';
    dest[x+=1] = 'q';
    dest[x+=1] = 'u';
    dest[x+=1] = 'o';
    dest[x+=1] = 't';
    dest[x+=1] = ';';
	x+=1;
  }else{
    dest[x] = src[i];
	x+=1;
  }
  dest[x] = '\0';
}

}

main()
{
  char st[1000];
  char out[1000];
  int l;

  cin.getline(st,1000);
  escape(st,out);

  cout << out << endl;
}