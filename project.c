#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <pthread.h>

struct matrice
{
    int r;
    int c;
};
int x = 0;
int y = 0;
// G O T O   	X Y  	F U N C T I O N
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}
void red()
{
    printf("\033[1;31m");
}
void green()
{
    printf("\033[0;32m");
}
void yellow()
{
    printf("\033[0;33m");
}
void blue()
{
    printf("\033[0;34m");
}
void reset()
{
    printf("\033[0m");
}
// F O R    	2 * 2  	M A T R I C E S
void *add1(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int k = 0;
    int d = 0;
    int a[10][10], b[10][10], sum[10][10];
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 12 + k; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            printf("\n");
        }
        k += 1;
    }
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 20 + d; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &b[i][j]);
            if (j == 0)
            {
                x += 5;
            }
        }
        d += 1;
    }
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // printing the result
    yellow();
    printf("\n\nSum of two matrices :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("\t%d", sum[i][j]);
        }
        printf("\n\n");
    }
}
// F O R    	3 * 3  	M A T R I C E S
void *add2(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int h = 0;
    int a[10][10], b[10][10], sum[10][10];
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + h; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {

            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        h += 1;
    }

    int k = 0;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 20 + k; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &b[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        k += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // P R I N T I N G 	 T H E 	 R E S U L T
    yellow();
    printf("\n\nSum of two matrices :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {

            printf("\t%d", sum[i][j]);
        }
        printf("\n\n");
    }
}
// F O R    	4 * 4  	M A T R I C E S
void *add3(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int h = 0;
    int i, j;
    int a[10][10], b[10][10], sum[10][10];
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 13 + h; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 8;
            }
            if (j == 1)
            {
                x += 8;
            }
            else if (j == 2)
            {
                x += 8;
            }
            else if (j == 3)
            {
                x += 8;
            }
        }
        h += 1;
    }
    int k = 0;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 20 + k; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &b[i][j]);

            if (j == 0)
            {
                x += 8;
            }
            if (j == 1)
            {
                x += 8;
            }
            else if (j == 2)
            {
                x += 8;
            }
            else if (j == 3)
            {
                x += 8;
            }
        }
        k += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n\nSum of two matrices :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {

            printf("\t%d", sum[i][j]);
        }
        printf("\n\n");
    }
}

// F O R    	2 * 2  	M A T R I C E S
void *sub1(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int k = 0;
    int d = 0;
    int a[10][10], b[10][10], sub[10][10];
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 12 + k; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 5;
            }
        }
        k += 1;
    }
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 18 + d; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &b[i][j]);
            if (j == 0)
            {
                x += 5;
            }
        }
        d += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n\nSubtraction of two matrices :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {

            printf("\t%d", sub[i][j]);
        }
        printf("\n\n");
    }
}
// F O R    	3 * 3  	M A T R I C E S
void *sub2(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int h = 0;
    int a[10][10], b[10][10], sub[10][10];
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + h; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {

            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        h += 1;
    }

    int k = 0;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 20 + k; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &b[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        k += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n\nSubtraction of two matrices :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {

            printf("\t%d", sub[i][j]);
        }
        printf("\n\n");
    }
}
// F O R    	4 * 4  	M A T R I C E S
void *sub3(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int h = 0;
    int a[10][10], b[10][10], sub[10][10];
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 13 + h; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 8;
            }
            if (j == 1)
            {
                x += 8;
            }
            else if (j == 2)
            {
                x += 8;
            }
            else if (j == 3)
            {
                x += 8;
            }
        }
        h += 1;
    }
    int k = 0;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 20 + k; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &b[i][j]);

            if (j == 0)
            {
                x += 8;
            }
            if (j == 1)
            {
                x += 8;
            }
            else if (j == 2)
            {
                x += 8;
            }
            else if (j == 3)
            {
                x += 8;
            }
        }
        k += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n\nSUBTRACTION OF TWO MATRICES :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {

            printf("\t%d", sub[i][j]);
        }
        printf("\n\n");
    }
}
// F O R    	2 * 2  	M A T R I C E S
void *mul1(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int m = 0;
    int d = 0;
    int A[10][10], B[10][10], MUL[10][10], k;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 12 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &A[i][j]);

            if (j == 0)
            {
                x += 5;
            }
        }
        m += 1;
    }
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX :   \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 18 + d; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &B[i][j]);
            if (j == 0)
            {
                x += 5;
            }
        }
        d += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            MUL[i][j] = 0;
            for (k = 0; k < r; k++)
            {
                MUL[i][j] = MUL[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n MULTIPLICATION OF TWO MATRIX IS  :   \n\n");
    reset();
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {

            printf("\t\t%d", MUL[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}

// F O R    	3 * 3  	M A T R I C E S
void *mul2(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int h = 0;
    int A[10][10], B[10][10], MUL[10][10], k;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + h; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {

            gotoxy(x, y);
            scanf("%d", &A[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        h += 1;
    }

    int m = 0;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 20 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &B[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        m += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            MUL[i][j] = 0;
            for (k = 0; k < r; k++)
            {
                MUL[i][j] = MUL[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n MULTIPLICATION OF TWO MATRIX IS  :   \n\n");
    reset();
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {

            printf("\t\t%d", MUL[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}
// F O R    	4 * 4  	M A T R I C E S
void *mul3(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    int h = 0;
    int A[10][10], B[10][10], MUL[10][10], k;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 1ST MATRIX  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 13 + h; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &A[i][j]);

            if (j == 0)
            {
                x += 8;
            }
            if (j == 1)
            {
                x += 8;
            }
            else if (j == 2)
            {
                x += 8;
            }
            else if (j == 3)
            {
                x += 8;
            }
        }
        h += 1;
    }
    int m = 0;
    yellow();
    printf("\n\n  ENTER ELEMENTS OF 2ND MATRIX  :   \n\n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 20 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &B[i][j]);

            if (j == 0)
            {
                x += 8;
            }
            if (j == 1)
            {
                x += 8;
            }
            else if (j == 2)
            {
                x += 8;
            }
            else if (j == 3)
            {
                x += 8;
            }
        }
        m += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            MUL[i][j] = 0;
            for (k = 0; k < r; k++)
            {
                MUL[i][j] = MUL[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n MULTIPLICATION OF TWO MATRIX IS  :   \n\n");
    reset();
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {

            printf("\t\t%d", MUL[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}
// F O R    	2 * 2  	M A T R I C E S
void *smul1(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j, no;
    int m = 0;
    int mul[10][10];
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 12 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &mul[i][j]);

            if (j == 0)
            {
                x += 5;
            }
        }
        m += 1;
    }

    // C O M P U T E  	 T H E 	 R E S U L T
    yellow();
    printf("\n PLZ ENTER THE MULTIPLICATION ELEMENTS  :  ");
    reset();
    scanf("%d", &no);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = no * mul[i][j];
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n\nTHE RESULT OF A SCALAR MATRIX MULTILPICATION IS  :  \n\n");
    reset();
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("\t%d", mul[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}
// F O R    	3 * 3  	M A T R I C E S
void *smul2(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j, no;
    int mul[10][10];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &mul[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        m += 1;
    }
    // P R I N T I N G 	 T H E 	 M A T R I X
    yellow();
    printf("\n MATRIX ELEMENTS ARE   :  \n\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            green();
            printf("\t%d", mul[i][j]);
            reset();
        }
        printf("\n");
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    yellow();
    printf("\n PLZ ENTER THE MULTIPLICATION VALUE  :  ");
    reset();
    scanf("%d", &no);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = no * mul[i][j];
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n\nTHE RESULT OF A SCALAR MATRIX MULTILPICATION IS  :  \n\n");
    reset();
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("\t%d", mul[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}
// F O R    	4 * 4  	M A T R I C E S
void *smul3(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j, no;
    int mul[10][10];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &mul[i][j]);

            if (j == 0)
            {
                x += 8;
            }
            if (j == 1)
            {
                x += 8;
            }
            else if (j == 2)
            {
                x += 8;
            }
            else if (j == 3)
            {
                x += 8;
            }
        }
        m += 1;
    }
    // P R I N T I N G  	 T H E 	 M A T R I X
    yellow();
    printf("\n  MATRIX ELEMENTS ARE  :  \n\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            blue();
            printf("\t%d", mul[i][j]);
            reset();
        }
        printf("\n");
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    yellow();
    printf("\n PLZ ENTER THE MULTIPLICATION VALUE  :  ");
    reset();
    scanf("%d", &no);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            mul[i][j] = no * mul[i][j];
        }
    }
    // P R I N T I N G  	 T H E 	 R E S U L T
    yellow();
    printf("\n\nTHE RESULT OF A SCALAR MATRIX MULTILPICATION IS  :  \n\n");
    reset();
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("\t%d", mul[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}
// F O R    	2 * 2  	M A T R I C E S
void *tran1(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    bool flag = true;
    int mat[10][10];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 12 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &mat[i][j]);

            if (j == 0)
            {
                x += 5;
            }
        }
        m += 1;
    }
    // C O M P U T E  	A N D		P R I N T I N G 	 T H E 	 R E S U L T
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                yellow();
                printf("\n\nTHE TRANSPOSE OF ENTERED MATRIX IS  :  \n\n");
                reset();
                for (i = 0; i < r; i++)
                {
                    for (j = 0; j < c; j++)
                    {

                        printf("\t%d", mat[j][i]);
                    }
                    printf("\n\n");
                }

                flag = false;
                break;
            }
        }
        printf("\n\n");
    }

    if (flag == true)
    {
        green();
        printf("\n\t\tTHERE IS NO NEED OF TRANSPOSE OF ENTERED MATRIX\n");
        reset();
    }
}
// F O R    	3 * 3  	M A T R I C E S
void *tran2(void *para)
{
    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    bool flag = true;
    int mat[10][10];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &mat[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        m += 1;
    }
    // C O M P U T E	A N D 		P R I N T I N G	 T H E 	 R E S U L T
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                yellow();
                printf("\n\nTHE TRANSPOSE OF ENETRED MATRIX IS  :  \n\n");
                reset();
                for (i = 0; i < r; i++)
                {
                    for (j = 0; j < c; j++)
                    {

                        printf("\t%d", mat[j][i]);
                    }
                    printf("\n\n");
                }

                flag = false;
                break;
            }
        }
        printf("\n\n");
    }

    if (flag == true)
    {
        green();
        printf("\n\t\tTHERE IS NO NEED OF TRANSPOSE OF ENTERED MATRIX\n");
        reset();
    }
}
// F O R    	2 * 2  	M A T R I C E S
void *Det1(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    long det, determinant;
    int A[2][2];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 12 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &A[i][j]);

            if (j == 0)
            {
                x += 5;
            }
        }
        m += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    red();
    printf("\n\n DETERMINENT OF MATRIX A =  %ld ", det);
    reset();
}
// F O R    	3 * 3  	M A T R I C E S
void *Det2(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    long determinant;
    int a[3][3];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        m += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) - a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    green();
    printf("\n\nDETERMINENT OF 3X3 MATRIX  :   %ld\n\n", determinant);
    reset();
}
// F O R    	2 * 2  	M A T R I C E S
void *sing1(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    long det;
    int A[2][2];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        x = 20, y = 12 + m;
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &A[i][j]);

            if (j == 0)
            {
                x += 5;
            }
        }
        m += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    red();
    printf("\n\n DETERMINENT OF MATRIX A =  %ld ", det);
    if (det == 0)
    {
        red();
        printf("\n\n\t\t THIS IS A SINGIULAR MATRIX\n\n");
        reset();
    }
    else
    {
        red();
        printf("\n\n\t\t THIS IS NOT A SINGIULAR MATRIX\n\n");
        reset();
    }
}
// F O R    	3 * 3  	M A T R I C E S
void *sing2(void *para)
{

    struct matrice *temp = (struct matrice *)para;
    int r = temp->r;
    int c = temp->c;
    int i, j;
    long determinant;
    int a[3][3];
    int m = 0;
    yellow();
    printf("\n PLZ ENTER THE MATRIX ELEMENTS  :  \n\n");
    reset();
    for (i = 0; i < r; ++i)
    {
        printf("\n");
        x = 20, y = 13 + m; // S E T  P O S I T I O N  	O F 	A 	C U R S O R
        for (j = 0; j < c; ++j)
        {
            gotoxy(x, y);
            scanf("%d", &a[i][j]);

            if (j == 0)
            {
                x += 5;
            }
            if (j == 1)
            {
                x += 8;
            }
            else
            {
                x += 5;
            }
        }
        m += 1;
    }
    // C O M P U T E  	 T H E 	 R E S U L T
    determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) - a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    green();
    printf("\n\nDETERMINENT OF 3X3 MATRIX IS :   %ld\n\n", determinant);
    if (determinant == 0)
    {
        green();
        printf("\n\n\t\t THIS IS A SINGULAR MATRIX\n\n");
        reset();
    }
    else
    {
        green();
        printf("\n\n\t\t THIS IS A NON-SINGULAR MATRIX\n\n");
        reset();
    }
}

int main()
{
    int ch;
    char input;
    int flag = 0;

    // T H R E A D S
    pthread_t tid[7];

    // // S T R U C T U R E 	I N I T I A L I Z E
    struct matrice temp[3];
    temp[0].r = 2;
    temp[0].c = 2;
    temp[1].r = 3;
    temp[1].c = 3;
    temp[2].r = 4;
    temp[2].c = 4;

    system("clear");

flag:
    // M A I N 	M E N U
    yellow();
    printf("\n\n\t\t================================\n");
    printf("\t\t\tMATRIX CALCULATOR\n");
    printf("\t\t================================\n\n\n");
    reset();
    green();
    printf("\t PRESS 1) FOR ADDITION OF TWO MATRICES\n");
    printf("\t PRESS 2) FOR SUBTRACTION OF TWO MATRICES\n");
    printf("\t PRESS 3) FOR MULTIPLICATION OF N*N MATRICES\n");
    printf("\t PRESS 4) FOR SCALAR MATRIX MULTIPLICATION\n");
    printf("\t PRESS 5) FOR TRANSPOSE OF A MATRICES\n");
    printf("\t PRESS 6) FOR DETERMINENT OF MATRICES\n");
    printf("\t PRESS 7) TO CHECK SINGULAR AND NON-SINGULAR MATRICES\n");
    printf("\t PRESS 8) FOR EXIT \n");
    reset();
    yellow();
    printf("\n\n ENTER CHOICE  (1 to 8):    ");
    reset();
    scanf("%d", &ch);
    while (ch < 1 || ch > 8)
    {
        printf("PLZ ENTER THE NO FROM 1 to 8  :    ");
        scanf("%d", &ch);
    }
    if (ch == 1)
    {
        system("clear");
        int a;
        char in;
    add:
        yellow();
        printf("\n\n\t\t========================================\n");
        printf("\t\t\tADDITION OF TWO MATRICES\n");
        printf("\t\t========================================\n\n\n");
        reset();
        green();
        printf("\t PRESS 1) FOR 2*2 MATRICES\n");
        printf("\t PRESS 2) FOR 3*3 MATRICES\n");
        printf("\t PRESS 3) FOR 4*4 MATRICES\n");
        reset();
        yellow();
        printf("\n\n Enter Choice (1 to 3) :    ");
        reset();
        scanf("%d", &a);
        while (a < 1 || a > 3)
        {
            printf("PLZ ENTER THE NO FROM 1 to 3  :    ");
            scanf("%d", &a);
        }
        if (a == 1)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tADDITION OF 2*2 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[0], NULL, add1, &temp[0]);
            pthread_join(tid[0], NULL);
        }
        if (a == 2)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tADDITION OF 3*3 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[0], NULL, add2, &temp[1]);
            pthread_join(tid[0], NULL);
        }
        if (a == 3)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tADDITION OF 4*4 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[0], NULL, add3, &temp[2]);
            pthread_join(tid[0], NULL);
        }
        yellow();
        printf("\n\n DO YOU WANT TO PERFORM ADDITION Operation  (Y/N) :   ");
        reset();
        scanf("%s", &in);
        printf("\n\n");
        if (in == 'Y' || in == 'y')
        {
            sleep(1);
            system("clear");
            goto add;
        }
        else if (in == 'N' || in == 'n')
        {
            sleep(1);
            system("clear");
            goto flag;
        }
    }
    else if (ch == 2)
    {

        system("clear");
        int a;
        char in;
    sub:
        yellow();
        printf("\n\n\t\t========================================\n");
        printf("\t\t\tSUBTRACTION OF TWO MATRICES\n");
        printf("\t\t========================================\n\n\n");
        reset();
        green();
        printf("\t PRESS 1) FOR 2*2 MATRICES\n");
        printf("\t PRESS 2) FOR 3*3 MATRICES\n");
        printf("\t PRESS 3) FOR 4*4 MATRICES\n");
        reset();
        yellow();
        printf("\n\n Enter Choice (1 TO 3)  :    ");
        reset();
        scanf("%d", &a);
        while (a < 1 || a > 3)
        {
            printf("PLZ ENTER THE NO FROM 1 to 3  :    ");
            scanf("%d", &a);
        }
        if (a == 1)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tSUBTRACTION OF 2*2 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[1], NULL, sub1, &temp[0]);
            pthread_join(tid[1], NULL);
        }
        if (a == 2)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tSUBTRACTION OF 3*3 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[1], NULL, sub2, &temp[1]);
            pthread_join(tid[1], NULL);
        }
        if (a == 3)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tSUBTRACTION OF 4*4 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[1], NULL, sub3, &temp[2]);
            pthread_join(tid[1], NULL);
        }
        yellow();
        printf("\n\n DO YOU WANT TO PERFORM SUBTRACTION OPERATION  (Y/N) :   ");
        reset();
        scanf("%s", &in);
        printf("\n\n");
        if (in == 'Y' || in == 'y')
        {
            sleep(1);
            system("clear");
            goto sub;
        }
        else if (in == 'N' || in == 'n')
        {
            sleep(1);
            system("clear");
            goto flag;
        }
    }
    else if (ch == 3)
    {
        system("clear");
        int a;
        char in;
    mul:
        yellow();
        printf("\n\n\t\t===========================================\n");
        printf("\t\t\tMULIPLICATION OF TWO MATRICES\n");
        printf("\t\t===========================================\n\n\n");
        reset();
        green();
        printf("\t PRESS 1) FOR 2*2 MATRICES\n");
        printf("\t PRESS 2) FOR 3*3 MATRICES\n");
        printf("\t PRESS 3) FOR 4*4 MATRICES\n");
        reset();
        yellow();
        printf("\n\n Enter Choice (1 TO 3)  :    ");
        reset();
        scanf("%d", &a);
        while (a < 1 || a > 3)
        {
            printf("PLZ ENTER THE NO FROM 1 to 3  :    ");
            scanf("%d", &a);
        }
        if (a == 1)
        {
            system("clear");
            green();
            printf("\n\n\t\t===========================================\n");
            printf("\t\t\tMULIPLICATION OF 2*2 MATRICES\n");
            printf("\t\t===========================================\n\n\n");
            reset();
            pthread_create(&tid[2], NULL, mul1, &temp[0]);
            pthread_join(tid[2], NULL);
        }
        if (a == 2)
        {
            system("clear");
            green();
            printf("\n\n\t\t===========================================\n");
            printf("\t\t\tMULIPLICATION OF 3*3 MATRICES\n");
            printf("\t\t===========================================\n\n\n");
            reset();
            pthread_create(&tid[2], NULL, mul2, &temp[1]);
            pthread_join(tid[2], NULL);
        }
        if (a == 3)
        {
            system("clear");
            green();
            printf("\n\n\t\t===========================================\n");
            printf("\t\t\tMULIPLICATION OF 4*4 MATRICES\n");
            printf("\t\t===========================================\n\n\n");
            reset();
            pthread_create(&tid[2], NULL, mul3, &temp[2]);
            pthread_join(tid[2], NULL);
        }
        yellow();
        printf("\n\n DO YOU WANT TO PERFORM MULTIPLICATION OPERATION  (Y/N) :   ");
        reset();
        scanf("%s", &in);
        printf("\n\n");
        if (in == 'Y' || in == 'y')
        {
            sleep(1);
            system("clear");
            goto mul;
        }
        else if (in == 'N' || in == 'n')
        {
            sleep(1);
            system("clear");
            goto flag;
        }
    }
    else if (ch == 4)
    {

        system("clear");
        int a;
        char in;
    smul:
        yellow();
        printf("\n\n\t\t===========================================\n");
        printf("\t\t\tSCALAR MATRICE MULTIPLICATION\n");
        printf("\t\t===========================================\n\n\n");
        reset();
        green();
        printf("\t PRESS 1) FOR 2*2 MATRICES\n");
        printf("\t PRESS 2) FOR 3*3 MATRICES\n");
        printf("\t PRESS 3) FOR 4*4 MATRICES\n");
        reset();
        yellow();
        printf("\n\n Enter Choice (1 TO 3) :    ");
        reset();
        scanf("%d", &a);
        while (a < 1 || a > 3)
        {
            printf("PLZ ENTER THE NO FROM 1 to 3  :    ");
            scanf("%d", &a);
        }
        if (a == 1)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================================\n");
            printf("\t\t\tSCALAR MATRICE MULIPLICATION OF 2*2 MATRICES\n");
            printf("\t\t========================================================\n\n\n");
            reset();
            pthread_create(&tid[3], NULL, smul1, &temp[0]);
            pthread_join(tid[3], NULL);
        }
        if (a == 2)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================================\n");
            printf("\t\t\tSCALAR MATRICE MULIPLICATION OF 3*3 MATRICES\n");
            printf("\t\t========================================================\n\n\n");
            reset();
            pthread_create(&tid[3], NULL, smul2, &temp[1]);
            pthread_join(tid[3], NULL);
        }
        if (a == 3)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================================\n");
            printf("\t\t\tSCALAR MATRICE MULIPLICATION OF 3*3 MATRICES\n");
            printf("\t\t========================================================\n\n\n");
            reset();
            pthread_create(&tid[3], NULL, smul3, &temp[2]);
            pthread_join(tid[3], NULL);
        }
        yellow();
        printf("\n\n DO YOU WANT TO PERFORM SACLAR MULTIPLICATION OPERATION  (Y/N) :   ");
        reset();
        scanf("%s", &in);
        printf("\n\n");
        if (in == 'Y' || in == 'y')
        {
            sleep(1);
            system("clear");
            goto smul;
        }
        else if (in == 'N' || in == 'n')
        {
            sleep(1);
            system("clear");
            goto flag;
        }
    }
    else if (ch == 5)
    {

        system("clear");
        int a;
        char in;
    tran:
        yellow();
        printf("\n\n\t\t========================================\n");
        printf("\t\t\tTRANSPOSE OF TWO MATRICES\n");
        printf("\t\t========================================\n\n\n");
        reset();
        green();
        printf("\t PRESS 1) FOR 2*2 MATRICES\n");
        printf("\t PRESS 2) FOR 3*3 MATRICES\n");
        reset();
        yellow();
        printf("\n\n Enter Choice  (1 TO 2):    ");
        reset();
        scanf("%d", &a);
        while (a < 1 || a > 2)
        {
            printf("PLZ ENTER THE NO FROM 1 to 3  :    ");
            scanf("%d", &a);
        }
        if (a == 1)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tTRANSPOSE OF 2*2 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[4], NULL, tran1, &temp[0]);
            pthread_join(tid[4], NULL);
        }
        if (a == 2)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tTRANSPOSE OF 3*3 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[4], NULL, tran2, &temp[1]);
            pthread_join(tid[4], NULL);
        }
        yellow();
        printf("\n\n DO YOU WANT TO PERFORM TRANSPOSE Operation  (Y/N) :   ");
        reset();
        scanf("%s", &in);
        printf("\n\n");
        if (in == 'Y' || in == 'y')
        {
            sleep(1);
            system("clear");
            goto tran;
        }
        else if (in == 'N' || in == 'n')
        {
            sleep(1);
            system("clear");
            goto flag;
        }
    }
    else if (ch == 6)
    {

        system("clear");
        int a;
        char in;
    det:
        yellow();
        printf("\n\n\t\t========================================\n");
        printf("\t\t\tDETERMINENT OF A MATRICE\n");
        printf("\t\t========================================\n\n\n");
        reset();
        green();
        printf("\t PRESS 1) FOR 2*2 MATRICES\n");
        printf("\t PRESS 2) FOR 3*3 MATRICES\n");
        reset();
        yellow();
        printf("\n\n Enter Choice (1 TO 2) :    ");
        reset();
        scanf("%d", &a);
        while (a < 1 || a > 2)
        {
            printf("PLZ ENTER THE NO FROM 1 to 3  :    ");
            scanf("%d", &a);
        }
        if (a == 1)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tDETERMINENT OF 2*2 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[5], NULL, Det1, &temp[0]);
            pthread_join(tid[5], NULL);
        }
        if (a == 2)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================\n");
            printf("\t\t\tDETERMINENT OF 3*3 MATRICES\n");
            printf("\t\t========================================\n\n\n");
            reset();
            pthread_create(&tid[5], NULL, Det2, &temp[1]);
            pthread_join(tid[5], NULL);
        }
        yellow();
        printf("\n\n DO YOU WANT TO PERFORM DETERMINET OPERATION  (Y/N) :   ");
        reset();
        scanf("%s", &in);
        printf("\n\n");
        if (in == 'Y' || in == 'y')
        {
            sleep(1);
            system("clear");
            goto det;
        }
        else if (in == 'N' || in == 'n')
        {
            sleep(1);
            system("clear");
            goto flag;
        }
    }
    else if (ch == 7)
    {

        system("clear");
        int a;
        char in;
    sing:
        yellow();
        printf("\n\n\t\t========================================\n");
        printf("\t\t\tSINGULAR AND NON-SINGULAR\n");
        printf("\t\t========================================\n\n\n");
        reset();
        green();
        printf("\t PRESS 1) FOR 2*2 MATRICES\n");
        printf("\t PRESS 2) FOR 3*3 MATRICES\n");
        reset();
        yellow();
        printf("\n\n Enter Choice  (1 TO 2) :    ");
        reset();
        scanf("%d", &a);

        if (a == 1)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================================\n");
            printf("\t\t\tSINGULAR AND NON-SINGULAR OF 2*2 MATRICES\n");
            printf("\t\t========================================================\n\n\n");
            reset();
            pthread_create(&tid[6], NULL, sing1, &temp[0]);
            pthread_join(tid[6], NULL);
        }
        if (a == 2)
        {
            system("clear");
            green();
            printf("\n\n\t\t========================================================\n");
            printf("\t\t\tSINGULAR AND NON-SINGULAR OF 2*2 MATRICES\n");
            printf("\t\t========================================================\n\n\n");
            reset();
            pthread_create(&tid[6], NULL, sing2, &temp[1]);
            pthread_join(tid[6], NULL);
        }
        yellow();
        printf("\n\n DO YOU WANT TO PERFORM SINGULAR Operation  (Y/N) :   ");
        reset();
        scanf("%s", &in);
        printf("\n\n");
        if (in == 'Y' || in == 'y')
        {
            sleep(1);
            system("clear");
            goto sing;
        }
        else if (in == 'N' || in == 'n')
        {
            sleep(1);
            system("clear");
            goto flag;
        }
    }

    else if (ch == 8)
    {
        sleep(1);
        exit(0);
    }

    return 0;
}