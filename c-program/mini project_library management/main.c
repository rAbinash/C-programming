/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void adLogin();
void stSignup();
void stLogin(int);
void vbooks();
void fbooks();

int stc = 1001, bkc = 2024;

struct Stud {
    char sn[100], pw[100];
    int r, bk, bkid;
} s[100];

struct Book {
    char bn[100], an[100];
    int isbn, nc, lc;
} b[100];

int main() 
{
    int a, b, p, c, d;
    char ai[100], ps[100];
    
    printf("\t\t\t********* Welcome to T4TEQ Library ***********\n ");
    
    while (1) 
    {
        printf("1. Admin\n2. Student\n3. Back\nSelect: ");
        scanf("%d", &b);
        
        if (b == 1) 
        {
            printf("Enter Admin Id: \n");
            scanf("\n%s", ai);
            printf("Enter password: \n");
            scanf("%d", &p);
            
            if (strcmp(ai, "T4TEQ") == 0 && p == 12345) 
            {
                adLogin();
            }
            else 
                printf("Admin Id/Password not matched!....\n");
        } 
        else if (b == 2) 
        {
            while (1) 
            {
                printf("1. Signup\n2. Signin\n3. Logout\nSelect: ");
                scanf("%d", &c);
                
                if (c == 1) 
                {
                    stSignup();
                }
                else if (c == 2) 
                {
                    printf("Enter Reg No: \n");
                    scanf("%d", &d);
                    printf("Enter Password:\n");
                    
                    if (stc > d) {
                        scanf("%s", ps);
                        
                        if (strcmp(s[d - 1001].pw, ps) == 0) 
                            stLogin(d - 1001);
                        else 
                            printf("Password Mismatch!....\n");
                    } 
                    else 
                        printf("No student Found....\n");
                } 
                else 
                    break;
            }
        } 
        else 
            break;
    }
    return 0;
}

void adLogin() 
{
    int x, i, f = 0;
    while (1) 
    {
        printf("1. Add Book\n2. View Issued Books\n3. Report\n4. Logout\nSelect: ");
        scanf("%d", &x);
        
        if (x == 1) 
        {
            printf("Enter book name:\n");
            scanf("\n%[^\n]", b[bkc - 2024].bn);
            printf("Enter Author Name:\n");
            scanf("\n%[^\n]", b[bkc - 2024].an);
            b[bkc - 2024].isbn = bkc;
            printf("Enter No of Copies: \n");
            scanf("%d", &b[bkc - 2024].nc);
            b[bkc - 2024].lc = 0;
            bkc++;
            printf("Book added successfully\n");
        } 
        else if (x == 2) 
        {
            for (i = 0; i < (bkc - 2024); i++) 
            {
                if (b[i].lc) 
                {
                    f++;
                    break;
                }
            }
            if (f) 
            {
                printf("Book Name\t\tAuthor Name\t\tISBN\tNo of Copies Lended\n");
                
                for (i = 0; i < (bkc - 2024); i++) 
                {
                    printf("%s\t\t %s\t\t %d\t%d \n", b[i].bn, b[i].an, b[i].isbn, b[i].lc);
                }
            } 
            else 
                printf("No Books are Lended\n");
        } 
        else if (x == 3) 
        {
            fbooks();
        }
        else 
            break;
    }
}
void stLogin(int rg) 
{
    int x, in, l = 1;
    
    while (1) 
    {
        printf("1. Lend Book\n2. Return Book\n3. View Books\n4. Signout\nSelect: ");
        scanf("%d", &x);
        
        if (x == 1) 
        {
            if (s[rg].bk == 2)
            {
                printf("You are not allowed to take a book now. Return your book to lend more books!\n");
            } 
            else 
            {
                printf("Enter Book's ISBN: \n");
                scanf("%d", &in);
                
                if (in < bkc && (b[in - 2024].nc - b[in - 2024].lc) > 0) 
                {
                    s[rg].bkid = in;
                    s[rg].bk = l++;
                    b[in - 2024].lc++;
                    printf("Book Lended Successfully\n");
                } 
                else 
                {
                    printf("Book Not Found!...\n");
                }
            }
        }
        else if (x == 2)
        {
            printf("Enter Book's ISBN: \n");
            scanf("%d", &in);
            
            if (in == s[rg].bkid) 
            {
                s[rg].bkid = 0;
                s[rg].bk = 0;
                b[in - 2024].lc--;
                printf("Book returned Successfully \n");
            } 
            else
            {
                printf("You haven't Lended that book...\n");
            }
        } 
        else if (x == 3) 
        {
            vbooks();
        } 
        else 
            break;
    }
}

void stSignup() {
    printf("Enter your name:\n");
    scanf("\n%[^\n]", s[stc - 1001].sn);
    printf("Your Registration number is : %d\n", stc);
    printf("Create Password: \n");
    scanf("\n%s", s[stc - 1001].pw);
    s[stc - 1001].r=stc;
    s[stc - 1001].bk = 0;
    s[stc - 1001].bkid = 0;
    printf("Registered Successfully....\n");
    stc++;
}

void vbooks()
{
    int i;
    if (bkc == 2024) 
        printf("No Books Found\n");
    else 
    {
        printf("Book Name\t\tAuthor Name\t\tISBN\tNo of Copies\n");
        
        for (i = 0; i < (bkc - 2024); i++) {
            printf("%s\t\t\t%s\t\t\t%d\t%d\n", b[i].bn, b[i].an, b[i].isbn, b[i].nc - b[i].lc);
    }
    }
}

void fbooks()
{
    int i;
    FILE *fp;
    fp=fopen("admin.txt","w");
    if (bkc == 2024) 
        printf("No Books Found\n");
    else 
    {
        fprintf(fp,"Book Name\t\tAuthor Name\t\tISBN\tNo of Copies\n");
        for (i = 0; i < (bkc - 2024); i++) {
            fprintf(fp,"%s\t\t\t%s\t\t\t%d\t%d\n", b[i].bn, b[i].an, b[i].isbn, b[i].nc - b[i].lc);
    }
    }
    fclose(fp);
}