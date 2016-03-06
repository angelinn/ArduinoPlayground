#define A_PIN 8
#define B_PIN 9
#define C_PIN 2
#define D_PIN 3
#define E_PIN 4
#define F_PIN 5
#define G_PIN 6


void Clear()
{
	digitalWrite(A_PIN, LOW);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, LOW);
	digitalWrite(D_PIN, LOW);
	digitalWrite(E_PIN, LOW);
	digitalWrite(F_PIN, LOW);
	digitalWrite(G_PIN, LOW);

}

void DisplayA()
{
	digitalWrite(D_PIN, LOW);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void DisplayB()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, LOW);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, HIGH);
}

void DisplayC()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, LOW);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, LOW);
}

void DisplayD()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, LOW);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, LOW);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void DisplayE()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, LOW);
}

void DisplayF()
{
	digitalWrite(D_PIN, LOW);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, LOW);
}


void DisplayOne()
{
	digitalWrite(D_PIN, LOW);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, LOW);
	digitalWrite(A_PIN, LOW);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, LOW);
}

void DisplayTwo()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, LOW);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, LOW);
}

void DisplayThree()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, LOW);
	digitalWrite(F_PIN, LOW);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void DisplayFour()
{
	digitalWrite(D_PIN, LOW);
	digitalWrite(E_PIN, LOW);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, LOW);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void DisplayFive()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, LOW);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, HIGH);
}

void DisplaySix()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, LOW);
	digitalWrite(C_PIN, HIGH);
}

void DisplaySeven()
{
	digitalWrite(D_PIN, LOW);
	digitalWrite(E_PIN, LOW);
	digitalWrite(F_PIN, LOW);
	digitalWrite(G_PIN, LOW);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void DisplayEight()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void DisplayNine()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, LOW);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, HIGH);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void DisplayZero()
{
	digitalWrite(D_PIN, HIGH);
	digitalWrite(E_PIN, HIGH);
	digitalWrite(F_PIN, HIGH);
	digitalWrite(G_PIN, LOW);
	digitalWrite(A_PIN, HIGH);
	digitalWrite(B_PIN, HIGH);
	digitalWrite(C_PIN, HIGH);
}

void LoopDisplay()
{
	//Loop through all Chars and Numbers
	DisplayA();
	delay(1000);
	DisplayB();
	delay(1000);
	DisplayC();
	delay(1000);
	DisplayD();
	delay(1000);
	DisplayE();
	delay(1000);
	DisplayF();
	delay(1000);
	DisplayOne();
	delay(1000);
	DisplayTwo();
	delay(1000);
	DisplayThree();
	delay(1000);
	DisplayFour();
	delay(1000);
	DisplayFive();
	delay(1000);
	DisplaySix();
	delay(1000);
	DisplaySeven();
	delay(1000);
	DisplayEight();
	delay(1000);
	DisplayNine();
	delay(1000);
	DisplayZero();
	delay(1000);
}

void setup()
{
	pinMode(A_PIN, OUTPUT);
	pinMode(B_PIN, OUTPUT);
	pinMode(C_PIN, OUTPUT);
	pinMode(D_PIN, OUTPUT);
	pinMode(E_PIN, OUTPUT);
	pinMode(F_PIN, OUTPUT);
	pinMode(G_PIN, OUTPUT);

}

void loop()
{
	LoopDisplay();
}