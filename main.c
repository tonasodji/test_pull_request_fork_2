// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

void g()
{
  //fix
  int a, b;
  a = 0;
  a = a + a;
}
//fix
int
main()
{
  int q, w, e, r, t, y;
  t=t+t;
}
