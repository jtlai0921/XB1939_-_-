float Damage()  
{  
    float Dmg_Value;      // 宣告區域變數  
    extern int Enchant;    // 宣告extern外部變數  
    Dmg_Value=(1-(float)Enchant/100)*1150;   //計算傷害值  
 
    return (Dmg_Value); 
}
