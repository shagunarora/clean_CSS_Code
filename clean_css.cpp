#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream fin;
ofstream fout;
fin.open("/home/shagun/css2.txt");
fout.open("/home/shagun/clean1.txt");
char ch;
while(fin)
{
fin>>ch;
if(ch == '{')
{fout<<"\n";
 fout<<ch;
}
else if(ch == '}')
{
  fout<<ch;
  fout<<"\n";
}
else
 fout<<ch;
}
fin.close();
fout.close();
}
