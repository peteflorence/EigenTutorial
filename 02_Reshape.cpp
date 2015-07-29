// This example from https://forum.kde.org/viewtopic.php?f=74&t=90876 doesn't compile

#include <Eigen/Core>
#include <Eigen/Array>


typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> EigenMatrixDbl;
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> EigenMatrixDblRowMajor;

int main(int argc, char** argv)
{
        EigenMatrixDbl m(3, 4);
        m << 1, 2, 3, 3.5,
             4, 5, 6, 6.5,
             7, 8, 9, 9.5;

        std::cout << m << std::endl << std::endl;


        EigenMatrixDblRowMajor n(3, 4);
        n << m;
        std::cout << n << std::endl << std::endl;

        Eigen::Map<EigenMatrixDblRowMajor> B2 = Eigen::Map<EigenMatrixDblRowMajor>(n.data(),4,3);

        std::cout << B2 << std::endl << std::endl;

        return 0;
}