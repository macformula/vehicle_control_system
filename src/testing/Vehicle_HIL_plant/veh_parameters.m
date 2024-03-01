massTotal_kg = 310;
sprungMass_kg = 229.34;
cgHeight_m = 0.341;
wheelRadius_m = 0.203;
gearboxRatio = 2412/187;

wheelBaseFront_m = 0.8415;
wheelBaseRear_m = 0.6885;
wheelBase_m = wheelBaseFront_m + wheelBaseRear_m;
precentWeightFront = wheelBaseRear_m/(wheelBaseFront_m + wheelBaseRear_m);

trackWidthFront_m = 1.31;
trackWidthRear_m = 1.285;

ayMax_g = 1.55;

yawInertia_kg_per_mSqrd = massTotal_kg * precentWeightFront * wheelBaseFront_m^2 + ...
                    massTotal_kg * (1-precentWeightFront) * wheelBaseRear_m^2;

FnFront_N = massTotal_kg * precentWeightFront * 9.81;
FnRear_N = massTotal_kg * (1-precentWeightFront) * 9.81;

CyFront_N_per_Rad = (1144.11 + 1200.63)/deg2rad(3.262 + 3.27);
CyRear_N_per_Rad = (1564.56 + 1426.56)/deg2rad(3.279 + 3.27);

Kus = (FnFront_N/CyFront_N_per_Rad - FnRear_N/CyRear_N_per_Rad);

Cl = -1.85;
Cd = 1.03;
dragArea_mSqrd = 0.84;