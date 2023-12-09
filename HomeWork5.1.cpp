#include <iostream>

#include "GeometricShapes.h"
#include "RailwayCarriage.h"
#include "Warrior.h"

int main()
{
   
   ShapeTriangle triangle{ 13, 14, 15 };

   triangle.DrawTriangle();
   std::cout << "Perimeter triangle: " << triangle.Perimeter() << std::endl;
   std::cout << triangle.Area() << std::endl;
   std::cout << triangle.InnerAngle(InnerAngles::INNER_ANGLE_B) << std::endl << std::endl;

   ShapeSquare square{ 5 };

   std::cout << square.Area() << std::endl;
   std::cout << "Perimeter triangle: " << square.Perimeter() << std::endl;
   std::cout << square.AreaCircleInSquare() << std::endl << std::endl;
   
   system("pause");
   system("cls");

//---------------------------------------------------------------------------------------------


   DryCargoCarriage dryCargoCar(10000, "Nuts");
   std::cout << dryCargoCar.GetWeightContent() << std::endl;
   std::cout << dryCargoCar.AddBoxes(20) << std::endl;
   std::cout << dryCargoCar.ReportSafity() << std::endl << std::endl; 

   ContainerCarriage tankCar(15000, "Oil");
   std::cout << tankCar.GetWeightContent() << std::endl;
   std::cout << tankCar.AddLiquid(5000) << std::endl;
   std::cout << tankCar.ReportSafity() << std::endl;

   system("pause");
   system("cls");

//----------------------------------------------------------------------------------------------

   Infantry firstRecruit{ "Brain", 2 };

   firstRecruit.AddScillsForRecruit();
   std::cout << firstRecruit.CauseDamage() << std::endl;
   std::cout << firstRecruit.TakeDamage() << std::endl;
   std::cout << firstRecruit.TeamProtection("Brain") << std::endl << std::endl;

   Archer secondRecruit{ "Bob", 2 };

   //std::cout << secondRecruit.TeamDamage( "Brain" ) << std::endl;
   
   secondRecruit.AddScillsForRecruit();


   std::cout << secondRecruit.TeamDamage( "Brain" ) << std::endl;

   
  
   



   
}

