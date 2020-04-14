//Compare the digits starting from the highest
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Multiplies a number by a digit
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies a positive integer by 10 ^ k
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Add of two numbers
int* ADD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Check for zero
bool NZER_N_B(int number[]);

//Subtract a two numbers
int* SUB_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Ading a unit to a natural number
int* ADD_1N_N(int lenNumber, int number[], int& lenOutput);

//Multiplication of natural numbers
int* MUL_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Multiplies a number by a number
int* MUL_ND_N(int lenNumber, int number[], int digit, int& lenOutput);

//Multiplies the number by 10 ^ k
int* MUL_Nk_N(int lenNumber, int number[], int power, int& lenOutput);

//Compares two numbers
int COM_NN_D(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//The first digit of dividing a larger number by a smaller one
int DIV_NN_Dk(int lenNumber1, int lenNumber2, int number1[], int number2[], int& position);

//Subtract a natural other natural multiplied by a digit
int* SUB_NDN_N(int lenNumber1, int lenNumber2, int& lenOutput, int digit, int number1[], int number2[]);

//The ratio of dividing a larger by a smaller or equal
int* DIV_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Remainder of division
int* MOD_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//�hange of sign
void MUL_ZM_Z(int& sign,int number[]);

//Finds the sum of integers
int* ADD_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer multiplication
int* MUL_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Integer check
bool INT_Q_B(int lenNumber1, int lenNumber2, int number1[], int number2[]);

//Integer division
int* DIV_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);

//Greatest common factor
int* GCF_NN_N(int lenNumber1, int lenNumber2, int& lenOutput, int number1[], int number2[]);

//Fraction reduction
void RED_Q_Q(int lenNumerator1, int lenDenominator1, int lenNumerator2, int lenDenominator2, int& lenOutputNumerator, int& lenOutputDenominator,
	int sign1, int sign2, int& signOutput, int numerator1[], int denominator1[], int numerator2[], int denominator2[], int* numeratorOutput, int* denominatorOutput);

//Substract two integers
int* SUB_ZZ_Z(int lenNumber1, int lenNumber2, int& lenOutput, int sign1, int sign2, int& signOutput, int number1[], int number2[]);