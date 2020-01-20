#include "cpptest.h"

CPPTEST_CONTEXT("Sudoku/Sudoku/Source Files/SudokuPuzzle.cpp");
CPPTEST_TEST_SUITE_INCLUDED_TO("Sudoku/Sudoku/Source Files/SudokuPuzzle.cpp");

class TestSuite_SudokuPuzzle_cpp_e3f0552e : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_SudokuPuzzle_cpp_e3f0552e);
        CPPTEST_TEST(test_Solve_1);
        CPPTEST_TEST(test_Solve_2);
        CPPTEST_TEST(test_Solve_3);
        CPPTEST_TEST(test_Solve_4);
        CPPTEST_TEST(test_SudokuPuzzle_1);
        CPPTEST_TEST(test_x7eCell_1);
        CPPTEST_TEST(test_x7eCell_10);
        CPPTEST_TEST(test_x7eCell_2);
        CPPTEST_TEST(test_x7eCell_3);
        CPPTEST_TEST(test_x7eCell_4);
        CPPTEST_TEST(test_x7eCell_5);
        CPPTEST_TEST(test_x7eCell_6);
        CPPTEST_TEST(test_x7eCell_7);
        CPPTEST_TEST(test_x7eCell_8);
        CPPTEST_TEST(test_x7eCell_9);
        CPPTEST_TEST(test_x7eSudokuPuzzle_1);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_Solve_1();
        void test_Solve_2();
        void test_Solve_3();
        void test_Solve_4();
        void test_SudokuPuzzle_1();
        void test_x7eCell_1();
        void test_x7eCell_10();
        void test_x7eCell_2();
        void test_x7eCell_3();
        void test_x7eCell_4();
        void test_x7eCell_5();
        void test_x7eCell_6();
        void test_x7eCell_7();
        void test_x7eCell_8();
        void test_x7eCell_9();
        void test_x7eSudokuPuzzle_1();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_SudokuPuzzle_cpp_e3f0552e);

void TestSuite_SudokuPuzzle_cpp_e3f0552e::setUp()
{
}

void TestSuite_SudokuPuzzle_cpp_e3f0552e::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_Solve_1 */
/* CPPTEST_TEST_CASE_CONTEXT void SudokuPuzzle::Solve(char *) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_Solve_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::SudokuPuzzle _cpptest_TestObject ;
    /* Initializing argument 1 (filenameIn) */ 
    char * _filenameIn  = 0 ;
    /* Tested function call */
    _cpptest_TestObject.Solve(_filenameIn);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_MEM_BUFFER("char * _filenameIn", ( _filenameIn ), sizeof(char));
}
/* CPPTEST_TEST_CASE_END test_Solve_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Solve_2 */
/* CPPTEST_TEST_CASE_CONTEXT void SudokuPuzzle::Solve(char *) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_Solve_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::SudokuPuzzle _cpptest_TestObject ;
    /* Initializing argument 1 (filenameIn) */ 
    char _filenameIn_0 [1];
    char * _filenameIn  = (char * )cpptestMemset((void*)&_filenameIn_0, 0, (1 * sizeof(char)));
    /* Tested function call */
    _cpptest_TestObject.Solve(_filenameIn);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_MEM_BUFFER("char * _filenameIn", ( _filenameIn ), sizeof(char));
}
/* CPPTEST_TEST_CASE_END test_Solve_2 */

/* CPPTEST_TEST_CASE_BEGIN test_Solve_3 */
/* CPPTEST_TEST_CASE_CONTEXT void SudokuPuzzle::Solve(char *) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_Solve_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::SudokuPuzzle _cpptest_TestObject ;
    /* Initializing argument 1 (filenameIn) */ 
    char _filenameIn_0 [16];
    char * _filenameIn  = (char * )cpptestMemset((void*)&_filenameIn_0, 0, (16 * sizeof(char)));
    /* Tested function call */
    _cpptest_TestObject.Solve(_filenameIn);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_MEM_BUFFER("char * _filenameIn", ( _filenameIn ), sizeof(char));
}
/* CPPTEST_TEST_CASE_END test_Solve_3 */

/* CPPTEST_TEST_CASE_BEGIN test_Solve_4 */
/* CPPTEST_TEST_CASE_CONTEXT void SudokuPuzzle::Solve(char *) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_Solve_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::SudokuPuzzle _cpptest_TestObject ;
    /* Initializing argument 1 (filenameIn) */ 
    char _filenameIn_0 [256];
    char * _filenameIn  = (char * )cpptestMemset((void*)&_filenameIn_0, 0, (256 * sizeof(char)));
    /* Tested function call */
    _cpptest_TestObject.Solve(_filenameIn);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_MEM_BUFFER("char * _filenameIn", ( _filenameIn ), sizeof(char));
}
/* CPPTEST_TEST_CASE_END test_Solve_4 */

/* CPPTEST_TEST_CASE_BEGIN test_SudokuPuzzle_1 */
/* CPPTEST_TEST_CASE_CONTEXT SudokuPuzzle::SudokuPuzzle(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_SudokuPuzzle_1()
{
    /* Pre-condition initialization */
    /* Testing constructor. */
    ::SudokuPuzzle _return;
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_SudokuPuzzle_1 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_1 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Cell _cpptest_TestObject ;
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_1 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_10 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_10()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = cpptestLimitsGetMinInt();
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = -1;
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = 0;
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_10 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_2 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_2()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = cpptestLimitsGetMaxInt();
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = cpptestLimitsGetMaxInt();
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = cpptestLimitsGetMaxInt();
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_2 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_3 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_3()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = 1;
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = -1;
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = cpptestLimitsGetMaxInt();
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_3 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_4 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_4()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = -1;
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = cpptestLimitsGetMaxInt();
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = cpptestLimitsGetMinInt();
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_4 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_5 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_5()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = cpptestLimitsGetMinInt();
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = 1;
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = cpptestLimitsGetMinInt();
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_5 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_6 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_6()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = cpptestLimitsGetMaxInt();
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = cpptestLimitsGetMinInt();
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = -1;
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_6 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_7 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_7()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = 0;
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = 1;
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = -1;
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_7 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_8 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_8()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = 1;
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = cpptestLimitsGetMinInt();
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = 1;
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_8 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eCell_9 */
/* CPPTEST_TEST_CASE_CONTEXT Cell::~Cell(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eCell_9()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (unknown) */ 
        int _arg1_0  = -1;
        /* Initializing constructor argument 2 (unknown) */ 
        int _arg2_0  = 0;
        /* Initializing constructor argument 3 (unknown) */ 
        int _arg3_0  = 1;
    ::Cell _cpptest_TestObject (_arg1_0, _arg2_0, _arg3_0);

    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eCell_9 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eSudokuPuzzle_1 */
/* CPPTEST_TEST_CASE_CONTEXT SudokuPuzzle::~SudokuPuzzle(void) */
void TestSuite_SudokuPuzzle_cpp_e3f0552e::test_x7eSudokuPuzzle_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::SudokuPuzzle _cpptest_TestObject ;
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eSudokuPuzzle_1 */
