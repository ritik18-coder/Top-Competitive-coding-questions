#include<bits/stdc++.h>
using namespace std;
void convert_to_words(char *num)
{
    int len = strlen(num);

    char *single_digits[] = { "zero", "one", "two",
                               "three", "four","five",
                               "six", "seven", "eight", "nine"};

    char *two_digits[] = {"", "ten", "eleven", "twelve",
                               "thirteen", "fourteen",
                               "fifteen", "sixteen",
                               "seventeen", "eighteen", "nineteen"};

    char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty",
                            "sixty", "seventy", "eighty", "ninety"};

    char *tens_power[] = {"hundred"};

    if (len == 1) {
        printf("%s", single_digits[*num - '0']);
        return;
    }

    while (*num != '\0') {

        if (len >= 3) {
            if (*num -'0' != 0) {
                printf("%s ", single_digits[*num - '0']);
                printf("%s ", tens_power[len-3]);
            }
            --len;
        }
        else {

            if (*num == '1') {
                int sum = *num - '0' + *(num + 1)- '0';
                printf("%s\n", two_digits[sum]);
                return;
            }

            else if (*num == '2' && *(num + 1) == '0') {
                printf("twenty\n");
                return;
            }

            else {
                int i = *num - '0';
                printf("%s ", i? tens_multiple[i]: "");
                ++num;
                if (*num != '0')
                    printf("%s ", single_digits[*num - '0']);
            }
        }
        ++num;
    }
}

int main()
{
  int n, i, arr[100], temp[100],j, count=0, D=0;
  char cnt[2];
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>arr[i];

    if(arr[i]==0 || arr[i]==1 || arr[i]==3 || arr[i]==4 || arr[i]==5 || arr[i]==7 || arr[i]==8 || arr[i]==9)
    {
      temp[i] = 2;
    }

    if(arr[i]==2 || arr[i]==6)
    {
      temp[i] = 1;
    }

  }

  for(i=0; i<n; i++)
  {
    D = D + temp[i];
  }

  for(i=0; i<n-1; i++)
  {
    for(j=i+1; j<n; j++)
    {
      if(arr[i]+arr[j]==D)
      {
        count++;
      }
    }
  }
    sprintf(cnt, "%d", count);
    convert_to_words(cnt);
  return 0;
}
