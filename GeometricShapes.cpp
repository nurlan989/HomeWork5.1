#include "GeometricShapes.h"


bool ShapeTriangle::DrawTriangle()
{
   
   if (m_side1 < (m_side2 + m_side3) && m_side2 < (m_side1 + m_side3) && m_side3 < (m_side1 + m_side2))
   {
      
      std::cout << "Draw Triangle " << std::endl;
      std::cout << "  ." << std::endl;
      std::cout << " ..." << std::endl;
      std::cout << "....." << std::endl << std::endl;
      return true;
   }
   else
   {
      std::cout << "Wrong values for triange" << std::endl;
      return false;
   }
     
   
}



double ShapeTriangle::InnerAngle(InnerAngles InnerAngles)
{

   switch (InnerAngles)
   {
      case InnerAngles::INNER_ANGLE_A:
      {
         std::cout << "Inner angle A: ";
         double A = acos((Square(m_side1) + Square(m_side3) - Square(m_side2)) / (2 * m_side1 * m_side3));
         return (A * 180) / M_PI;
         break;
      }
      case InnerAngles::INNER_ANGLE_B:
      {
         std::cout << "Inner angle B: ";
         double B = acos((Square(m_side1) + Square(m_side2) - Square(m_side3)) / (2 * m_side1 * m_side2));
         return (B * 180) / M_PI;
         break;
      }
      case InnerAngles::INNER_ANGLE_C:
      {
         std::cout << "Inner angle C: ";
         double C = acos((Square(m_side2) + Square(m_side3) - Square(m_side1)) / (2 * m_side3 * m_side2));
         return (C * 180) / M_PI;
         break;
      }
      default:
      {
         return 0;
         break;
      }
   }
}








