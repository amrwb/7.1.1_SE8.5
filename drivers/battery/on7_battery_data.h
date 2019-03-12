#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     70
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
  {27084, 700},
  {27490, 650},
  {28010, 600},
  {28574, 550},
  {29217, 500},
  {29960, 450},
  {30761, 400},
  {31676, 350},
  {32646, 300},
  {33708, 250},
  {34797, 200},
  {35896, 150},
  {36961, 100},
  {37972, 50},
  {38164, 40},
  {38353, 30},
  {38538, 20},
  {38719, 10},
  {38935, 0},
  {39113, -10},
  {39451, -30},
  {39564, -40},
  {39730, -50},
  {40447, -100},
  {41045, -150},
  {41528, -200},  
};


#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#define TEMP_HIGH_THRESHOLD_EVENT  500
#define TEMP_HIGH_RECOVERY_EVENT   450
#define TEMP_LOW_THRESHOLD_EVENT   0
#define TEMP_LOW_RECOVERY_EVENT    50
#define TEMP_HIGH_THRESHOLD_NORMAL 500
#define TEMP_HIGH_RECOVERY_NORMAL  450
#define TEMP_LOW_THRESHOLD_NORMAL  0
#define TEMP_LOW_RECOVERY_NORMAL   50
#define TEMP_HIGH_THRESHOLD_LPM    500
#define TEMP_HIGH_RECOVERY_LPM     450
#define TEMP_LOW_THRESHOLD_LPM     0
#define TEMP_LOW_RECOVERY_LPM      50
