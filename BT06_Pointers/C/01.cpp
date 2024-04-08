#include<iostream>

using namespace std;

int strlen(char* a)
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }

    return i;
}
// Đảo xâu. Viết một hàm reverse(char a[]) với nhiệm vụ đảo ngược thứ tự của a).
void reverse(char* a)
{
    int len = strlen(a);
    for(int i = 0; i<len/2; i++)
    {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
}

// Xóa kí tự. Viết hàm delete_char(char a[], char c) với nhiệm vụ xóa hết các kí tự c trong xâu a.

void delete_char(char a[], char c)
{
    int i = 0;
    int j = 0;
    while (a[i] != '\0')
    {
        if(a[i] != c )
        {
            a[j] = a[i];
            j++;
        }
        i++;
    }
    a[j] = '\0';

}

//Độn phải. Viết hàm pad_right(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào cuối xâu a để a có độ dài bằng n. Nếu a đã dài quá n thì không phải làm gì cả.

void pad_right(char a[], int n)
{
    while (strlen(a) < n)
    {
        a[strlen(a)] = ' ';
    }
    a[strlen(a)+1] = '\0'; 
    
}

// Độn trái. Viết hàm pad_left(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào đầu xâu a để a có độ dài bằng n. Nếu a đã dài quá n thì không phải làm gì cả.

void pad_left(char a[], int n)
{
        int len = strlen(a);
    if (len >= n) 
        return;

    int num = n - len;
    for (int i = len; i >= 0; i--)
    {
        a[i + num] = a[i];
    }

    for (int i = 0; i < num; i++)
    {
        a[i] = ' ';
    }
    a[strlen(a)] = '\0'; 
} 

// Cắt xâu. Viết hàm truncate(char a[], int n) với nhiệm vụ cắt bớt đoạn cuối của xâu a để a có độ dài n nếu như a đang dài quá n kí tự.

void truncate(char a[], int n)
{
    a[n+1] = '\0'; 
}

// Đối gương. Viết hàm bool is_palindrome(char a[]) với nhiệm vụ kiểm tra xem xâu a có đối xứng hay không. Trả về true nếu đối xứng, false nếu không.

bool is_palindrome(char a[])
{
    for (int i = 0; i<strlen(a)/2; i++)
    {
        if(a[i] != a[strlen(a)-i-1])
        {
            return false;
        }
    }
    return true;
}

//Lọc trái. Viết hàm trim_left(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở đầu xâu a, nếu có.

void trim_left(char a[])
{
    int len = strlen(a);
    int i, j;

    for (i = 0; i < len; i++)
    {
        if (!isspace(a[i])) 
            break;
    }

    if (i > 0)
    {
        for (j = 0; j < len - i; j++)
        {
            a[j] = a[j + i];
        }
        a[j] = '\0';
    }
    
}

void trim_right(char a[])
{
    int len = strlen(a);
    int i;

    for (i = len - 1; i >= 0; i--)
    {
        if (!isspace(a[i]))
            break;
    }
    a[i + 1] = '\0';
}
int main()
{
    char a[] = "Hello";
    reverse(a);
    cout << a << endl;
    delete_char(a, 'e');
    pad_right(a,6);
    pad_left(a,10);
    truncate(a,5);
    cout << a << endl;
    return 0;
}