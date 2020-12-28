int main()

typedef struct Person
{
	char* name;
	int age;
	char *hairColour;
	struct Person *child;
}person_t;

typedef struct Student
{
	int stID;
	char *courseID;
}student_t;

{
	void doSomething();

	person_t her;
	student_t me;
	struct Person him;

	him.age;

	struct Person* we;

	we->hairColour;

	return 0;
}

void doSomething(int x[][50])
{

}

void doSomethingElse(int **x)
{

}