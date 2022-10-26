/**
  ******************************************************************************
  * @file    main.c
  * @author  Ons Bouzidi
  * @brief   Supporting several plateforms  
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/


//#define INTEL
#define SOM // Macro named Som  
#define MIN(var1, var2) (((var1) < (var2)) ? (var1) : (var2)) //function MIN definition
//#define OTHERS
#define MUL // Macro named  Mul 
#define MAX(var1, var2) (((var1) > (var2)) ? (var1) : (var2)) //function MAX definition 



/* Private function prototypes -----------------------------------------------*/
static int sum(int var1 ,int var2 ); //Prototype of sum function
static int mul ( int var1 ,int var2); // Prototype of mul function 

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

  


int main(void)
{
 

#ifdef SOM 
int ResultSum =sum(10,2);
#endif /*Somme */


int  ResultMin=MIN(10, 20); // Min 

#ifdef MUL
int ResultMul =mul(100,20);
#endif /*Multiplication */

int ResultMax = MAX(100,20); // Max

  while (1)
  {
   
  }
}

#ifdef SOM 
  static int sum(int var1 ,int var2 )
  {
    return(var1+var2);
  }
#endif
/*Definition of the function Som */ 


#ifdef MUL
static int mul ( int var1 ,int var2)
{
  return(var1*var2);
}
#endif
/*Definition of the function Mul */ 


/**************************************END OF FILE**************************************/
