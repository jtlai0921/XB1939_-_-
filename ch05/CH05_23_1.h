float Damage()  
{  
    float Dmg_Value;      // �ŧi�ϰ��ܼ�  
    extern int Enchant;    // �ŧiextern�~���ܼ�  
    Dmg_Value=(1-(float)Enchant/100)*1150;   //�p��ˮ`��  
 
    return (Dmg_Value); 
}
