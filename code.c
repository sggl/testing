 1. int main(){
 2.   int a = 100;
 3.   int b = 0;
 4.   bool flag = getFlag();
 5.   while(a > b) {
 6.     if (flag) {
 7.       b += 2;
 8.       for (int i = 0; i < calcCPU(a,b); i++) {
 9.         int grep = initGrep(i);
10.         b += grep%2;
11.       }
12.       std::cout << a;
13.     }
14.     else {
15.       a -= 3;
16.       std::cout << b;
17.     }
18.
19.     if (a%3 == 0) {
20.       std::cout << a;
21.     }
22.     else {
23.       a -= 3;
24.       std::cout << b;
25.     }
26.  }
27.   std::cout << "a = ", a, " b = ", b;
28.   return 0;
29. }
