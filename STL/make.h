#include<cstring>
template <typename Container>
Container make (const char s[]){
 return Container (&s[0], &s[strlen(s)]);
}
