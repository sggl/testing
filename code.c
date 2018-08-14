1.
 2. int main(){
 3.   int a = 100;
 4.   int b = 0;
 5.   bool flag = getFlag();
 6.   while(a > b) {
 7.     if (flag) {
 8.       b += 2;
 9.       for (int i = 0; i <= calcCPU(a,b); i++) {
10.         int grep = initGrep(i+1);
11.         b += grep%2;
12.       }
13.       std::cout << a;
14.     }
15.     else {
16.       a -= 3;
17.       std::cout << b;
18.     }
19.
20.     if (a%3 == 0) {
21.       std::cout << a;
22.     }
23.     else {
24.       a -= 2;
25.       std::cout << b;
26.     }
27.   }
28.   std::cout << "a = ", a, " b = ", b;
29.   return 0;
30. }
