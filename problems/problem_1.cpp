float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    if (consumed_water>=30){
        if (consumed_water>=50){
            if (consumed_water>60&&consumed_water<=70){
                cost=13+30*0.4+20*0.12+10*1.4;
            }
            else{
                cost=13+30*0.4+20*0.12+10*1.4+(consumed_water-70)*1.5;
            }
        }
        else{
            cost=13+consumed_water*0.4+(consumed_water-30)*0.12;
        }
    }
    else{
    cost=13+consumed_water*0.4;
    }
    return cost;
}
