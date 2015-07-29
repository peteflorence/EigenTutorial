#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
int main()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);

  Matrix<double, 9, 1> A; 
  A << 0.4, 1.5, 2.6, 3.1, 4.9, 5.8, 6.5, 7.7, 8.3;
  auto B = Map<MatrixXd>(A.data(),3,3);
  //auto C = Map<Matrix3d,Eigen::Aligned> a(A.data());
  //B = B.transpose().eval();

  std::cout << A.segment(3,3) << std::endl;


  int i = 1;
  double j = 2.1;
  auto k = i + j;
  i = i + j;


  std::cout << i << std::endl;
}