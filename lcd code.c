while (1)
{
    if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_4) == GPIO_PIN_RESET)
    {
        // Obstacle Detected

        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);

        ST7920_Clear();

        ST7920_PrintAt(0,0,"WARNING");
        ST7920_PrintAt(1,0,"OBSTACLE");
        ST7920_PrintAt(2,0,"DETECTED");
        ST7920_PrintAt(3,0,"MOTOR STOPPED");
    }
    else
    {
        // Liftgate Opening

        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);

        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);

        ST7920_Clear();

        ST7920_PrintAt(0,0,"LIFTGATE");
        ST7920_PrintAt(1,0,"OPENING");
        ST7920_PrintAt(2,0,"IR ACTIVE");
    }

    HAL_Delay(200);
}