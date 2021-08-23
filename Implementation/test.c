#include "unity.h"
#include "operations.h"
#include "freq_kvl.h"
#include "binaryandgray.h"
#include "hexanddecimal.h"
#include "BinarytodecimalandViceversa.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME   "Calculator"

/* Prototypes for all the test functions */
void test_total_ser(void);
void test_total_par(void);
void test_unit_conv1(void);
void test_unit_conv2(void);
void test_unit_conv3(void);
void test_unit_conv4(void);
void test_cal_res(void);
void test_res_val(void);
void testbin_dec(void);
void testdec_bin(void);
void test_dectooct(void);
void test_OctToDec(void);
void test_fq_calculator(void);
void test_KVL_2();
void test_KVL_3();
void test_unit_eightBitBinaryTo8BitGray(void);
void test_unit_eightBitBinaryTo4BitGray(void);
void test_unit_eightBitGrayTo8BitBinary(void);
void test_unit_eightBitGrayTo4BitBinary(void);
void test_unit_DecimalToHexadecimal(void);
void test_unit_HexadecimalToDecimal(void);



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_total_ser);
  RUN_TEST(test_total_par);
  RUN_TEST(test_unit_conv1);
  RUN_TEST(test_unit_conv2);
  RUN_TEST(test_unit_conv3);
  RUN_TEST(test_unit_conv4);
  RUN_TEST(test_cal_res);
  RUN_TEST(test_res_val);
  RUN_TEST(testbin_dec);
  RUN_TEST(testdec_bin);
  RUN_TEST(test_dectooct);
  RUN_TEST(test_OctToDec);
  RUN_TEST(test_fq_calculator);
  RUN_TEST(test_KVL_2);
  RUN_TEST(test_KVL_3);
  RUN_TEST(test_unit_eightBitBinaryTo8BitGray);
  RUN_TEST(test_unit_eightBitBinaryTo4BitGray);
  RUN_TEST(test_unit_eightBitGrayTo8BitBinary);
  RUN_TEST(test_unit_eightBitGrayTo4BitBinary);
  RUN_TEST(test_unit_DecimalToHexadecimal);
  RUN_TEST(test_unit_HexadecimalToDecimal);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_total_ser(void) {
  TEST_ASSERT_EQUAL(90.000000, total_ser(30,20,40));
  TEST_ASSERT_EQUAL(11900.000000, total_ser(2400,4500,5000));
  TEST_ASSERT_EQUAL(7000.000000, total_ser(0,2500,4500));
  TEST_ASSERT_EQUAL(5004000.000000, total_ser(5000000,4000,0));



}

void test_total_par(void) {
  TEST_ASSERT_EQUAL(1.668823,total_par(6,5,4.3));
  TEST_ASSERT_EQUAL(318.584076,total_par(2400,4500,400));
  TEST_ASSERT_EQUAL(23.028822,total_par(45,56,299));
}

void test_cal_res(void) {
  TEST_ASSERT_EQUAL(5.000000, cal_res(12,2.4));
  TEST_ASSERT_EQUAL(3.500000, cal_res(28,8));
  TEST_ASSERT_EQUAL(5.562500, cal_res(44.5,8));
  
}

void test_res_val(void) {
  TEST_ASSERT_EQUAL(68000, res_val(6,8,0,2));
  
}

void test_unit_conv1(void) {
  TEST_ASSERT_EQUAL(46500.000000, unit_conv1(46.50));
  
}

void test_unit_conv2(void) {
  TEST_ASSERT_EQUAL(1.500000, unit_conv2(1500));
  
  
}

void test_unit_conv3(void) {
  TEST_ASSERT_EQUAL(5000000.000000, unit_conv3(5));
  

}

void test_unit_conv4(void) {
  TEST_ASSERT_EQUAL(4.000000, unit_conv4(4000000));
  
}


void testbin_dec()
{
    TEST_ASSERT_EQUAL(214,Binarytodecimal(11010110));
    TEST_ASSERT_EQUAL(53,Binarytodecimal(00110101));
}
void testdec_bin()
{
    TEST_ASSERT_EQUAL(1001,decimaltoBinary(9));
    TEST_ASSERT_EQUAL(11110,decimaltoBinary(30));
    
}


void test_dectooct(void) {
  TEST_ASSERT_EQUAL(18, dectooct(22));
  TEST_ASSERT_EQUAL(289175461, dectooct(2117073645));

}

void test_OctToDec(void) {
  TEST_ASSERT_EQUAL(22, OctToDec(18));
  TEST_ASSERT_EQUAL(2117073645, OctToDec(289175461));
  
}


void test_fq_calculator(void) {
  TEST_ASSERT_EQUAL(112.5, fq_calculator(200,10));
  TEST_ASSERT_EQUAL(0.000113, fq_calculator(200000,10000000000)));
  
}


void test_KVL_2(){
    int j,k,temp;
    float r[2][2]={{8,-2},{-2,8}},v[2][1]={{5},{0}}, **i;
    i = KVL_2(r,v);
    for(j=0;j<2;j++)
       for(k=0;k<2;k++) 
       {
           temp+=i[j][k];
       }
    TEST_ASSERT_EQUAL(0.833332, temp);
}

void test_KVL_3(){
    int j,k,temp;
    float r[3][3]={{5,-3,0},{-3,8,-4},{0,-4,8}},v[3][1]={{20},{0},{0}}, **i;
    i = KVL_3(r,v);
    for(j=0;j<3;j++)
       for(k=0;k<3;k++) 
       {
           temp+=i[j][k];
       }
    TEST_ASSERT_EQUAL(9.940828, temp);
}


void test_unit_eightBitBinaryTo8BitGray(void) {
  TEST_ASSERT_EQUAL(11011011, eightBitBinaryTo8BitGray(10010010));
  TEST_ASSERT_EQUAL(10000000, eightBitBinaryTo8BitGray(11111111));
  TEST_ASSERT_EQUAL(11111111, eightBitBinaryTo8BitGray(10101010));
  TEST_ASSERT_EQUAL(11010100, eightBitBinaryTo8BitGray(10011000));
}

void test_unit_eightBitBinaryTo4BitGray(void) {
  TEST_ASSERT_EQUAL(1101, eightBitBinaryTo4BitGray(10010010));
  TEST_ASSERT_EQUAL(1000, eightBitBinaryTo4BitGray(11111111));
  TEST_ASSERT_EQUAL(1111, eightBitBinaryTo4BitGray(10101010));
}

void test_unit_eightBitGrayTo8BitBinary(void) {
  TEST_ASSERT_EQUAL(10010101, eightBitGrayTo8BitBinary(11011111));
  TEST_ASSERT_EQUAL(10101010, eightBitGrayTo8BitBinary(11111111));
  TEST_ASSERT_EQUAL(11101000, eightBitGrayTo8BitBinary(10011100));
  TEST_ASSERT_EQUAL(00000000, eightBitGrayTo8BitBinary(00000000));
}

void test_unit_eightBitGrayTo4BitBinary(void) {
  TEST_ASSERT_EQUAL(1001, eightBitGrayTo4BitBinary(11011111));
  TEST_ASSERT_EQUAL(1010, eightBitGrayTo4BitBinary(11111111));
  TEST_ASSERT_EQUAL(1110, eightBitGrayTo4BitBinary(10011100));
  TEST_ASSERT_EQUAL(0000, eightBitGrayTo4BitBinary(00000000));
  
}


void test_unit_DecimalToHexadecimal(void) {
  TEST_ASSERT_EQUAL(1130, DecimalToHexadecimal("046A"));
  TEST_ASSERT_EQUAL(854, DecimalToHexadecimal("0356"));
  TEST_ASSERT_EQUAL(2021, DecimalToHexadecimal("07E5"));
  TEST_ASSERT_EQUAL(50584, DecimalToHexadecimal("C598"));
}

void test_unit_HexadecimalToDecimal(void) {
  TEST_ASSERT_EQUAL("56A8", HexadecimalToDecimal(22184));
  TEST_ASSERT_EQUAL("5F3", HexadecimalToDecimal(1523));
  TEST_ASSERT_EQUAL("DFF", HexadecimalToDecimal(3583));
}



