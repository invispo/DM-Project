#include "Modules.h"

int DIV_NN_Dk(int lenNumber1, int lenNumber2, int number1[], int number2[], int& position) {

	if (!NZER_N_B(number1) || !NZER_N_B(number2)) {
		return 0;
	}

	position = 0;
	int flag = COM_NN_D(lenNumber1, lenNumber2, number1, number2);
	int digit = 0;
	int* cup;
	int* newNumber2;
	int* newNumber1;
	int lenLocalOutput = 0;

	int* localNumber1 = new int[lenNumber1];
	int* localNumber2 = new int[lenNumber2];

	for (int i = 0; i < lenNumber1; i++) {
		localNumber1[i] = number1[i];
	}
	for (int i = 0; i < lenNumber2; i++) {
		localNumber2[i] = number2[i];
	}

	switch (flag) {

	case 2:

		if (COM_NN_D(lenNumber2, lenNumber2, localNumber1, localNumber2) != 1) {
			position = lenNumber1 - lenNumber2;
		}
		else {
			position = (lenNumber1 - lenNumber2) - 1;
		}

		newNumber2 = MUL_Nk_N(lenNumber2, number2, position, lenLocalOutput);
		lenNumber2 = lenLocalOutput;

		while (COM_NN_D(lenNumber1, lenNumber2, localNumber1, newNumber2) != 1) {

			digit++;

			cup = SUB_NN_N(lenNumber1, lenNumber2, lenLocalOutput, localNumber1, newNumber2);
			for (int i = 0; i < lenLocalOutput; i++) {
				localNumber1[i] = cup[i];
			}
			lenNumber1 = lenLocalOutput;
		}

		break;

	case 1:

		if (COM_NN_D(lenNumber1, lenNumber1, localNumber2, localNumber1) != 1) {
			position = lenNumber2 - lenNumber1;
		}
		else {
			position = (lenNumber2 - lenNumber1) - 1;
		}

		newNumber1 = MUL_Nk_N(lenNumber1, localNumber1, position, lenLocalOutput);
		lenNumber1 = lenLocalOutput;

		while (COM_NN_D(lenNumber2, lenNumber1, localNumber2, newNumber1) != 1) {

			digit++;
			cup = SUB_NN_N(lenNumber2, lenNumber1, lenLocalOutput, localNumber2, newNumber1);
			for (int i = 0; i < lenLocalOutput; i++) {
				localNumber2[i] = cup[i];
			}
			lenNumber2 = lenLocalOutput;

		}

		break;

	default:
		position = 0;
		digit = 1;
		break;
	}
	return digit;
}