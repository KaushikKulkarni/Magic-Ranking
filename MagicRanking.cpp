/**
 *  * Includes
 *   **/
#include <iostream>

/**
 *   * @Title : Magic Rankings .
 *     * @author :Kaushik G Kulkarni .
 *       * @brief :This is seeming to be the first ever challenging problem of the site CodeChef.com
 *         * So looking forward for a wonderful experience .
 *           * Happy Coding !!!
 *             **/
using namespace std ;
int n, judge[10][10],i,j,CurrentSum = 0 ,MaxSum = -1  ;
/**
 *   *@Note : Here I am using very important variables as global since they need to be initialized in the main and be used for 
 *     *application in the function void Calcsum() .
 *       **/
/**
 *   *Now the use of each variable is defined as follows .
 *     *int n - used to store the side of the matrix .
 *       *int judge[10][10] -used to store the values of the points given by the judges .
 *         *int i and int j -Their importance is to act as pointers while moving through the matrix .
 *           *int CurrentSum - This stores the current value of sum .
 *             *int MaxSum- This is used to store the maximum value of the CurrentSum obtaained till now .
 *               *Note if at the end the MaxSum remains -1 it is obvious that I need to output BAD JUDGES .
 *                 **/

void CalcSum()
{
	for (int k=0 ;k <= 1; k++)
	{
		if(k == 0 && i!= n-1 )
		{
			i++;
			CurrentSum = CurrentSum + judge[i][j] ;
			CalcSum() ;
			CurrentSum = CurrentSum - judge[i][j] ;
			i-- ;
		}
		if( k==1 && j != n-1)
		{
			j++ ;
			CurrentSum = CurrentSum + judge[i][j] ;
			CalcSum() ;
			CurrentSum = CurrentSum - judge[i][j] ;
			j-- ;
		}
	}	
	if((j== n-1) &&(i== n-1))
	{
		if(CurrentSum > MaxSum )
		{
			MaxSum = CurrentSum ;
		}	
	}
	return ;
}

int main()
{
	cout<<"Please enter N -the number of seats in a row or column \n" ;
	cin >> n ;
	cout << "Now enter the value of pts. of each judge . \n" ;
	for ( i=0 ;i < n; i++)
	{
		for(j=0; j < n; j++)
		{
			cin >> judge[i][j] ;
		}
	}
	i = 0 ;
	j = 0 ;
	CalcSum() ; 
	if(MaxSum == -1)
		cout<<"BAD JUDGES \n";
	else
	{
		float ans = (0.1*10.0*(MaxSum))/((2*n) -3.0) ;
		cout<<  ans <<endl ;
	}
}
