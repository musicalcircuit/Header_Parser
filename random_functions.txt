//
// Created by Austin Fissinger on 9/25/20.
//

#ifndef HEADER_PARSER_RANDOM_FUNCTIONS_H
#define HEADER_PARSER_RANDOM_FUNCTIONS_H

void HEXtoBCD(int hex_value);   /* HEXtoBCD */
void IR_LED_control(char selection);    /* IR_LED_control */
void Backlite_control(char selection);  /* Backlite_control */
void update_string(char *string_data, int string);  /*  update_string */
void Display_Update(char p_L1,char p_L2,char p_L3,char p_L4); /* Display_Update */
void lcd_4line(void); /* lcd_4line */
void lcd_out(char *s, char line, char position); /* lcd_out */
void Change_Display(char* str1, char* str2, char* str3, char* str4); /* Change_Display */



#endif //HEADER_PARSER_RANDOM_FUNCTIONS_H
