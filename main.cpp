#include <iostream>
#include <cctype>

bool isPalindrome (const std::string &text)
{
  std::string text2 = "", temp = "";
  for (int i = 0; i < text.length(); i++)
  {
    if (!isblank(text[i]))
    {
      temp += tolower(text[i]);
    }
  }
  int it= temp.length();
  while (it-->0)
  {
	text2 += temp[it];
  }
  return (temp == text2);
}

int main() 
{
  std::cout << isPalindrome("A to idiota");
}