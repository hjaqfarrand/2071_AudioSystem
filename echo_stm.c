// to go in processing stm
// does the timing for echo 

while(HAL_GPIO_ReadPin(ECHO_GPIO_Port, ECHO_Pin) == GPIO_PIN_RESET);

__HAL_TIM_SET_COUNTER(&htim16, 0);

while(HAL_GPIO_ReadPin(ECHO_GPIO_Port, ECHO_Pin) == GPIO_PIN_SET);

uint32_t echoTime = __HAL_TIM_GET_COUNTER(&htim16);

uint32_t distance = echoTime / 58;
