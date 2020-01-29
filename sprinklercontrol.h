/*
 * Project SprinklerControl
 * Description: Home Sprinkler System with weather modification
 * Author: Martin Smaha
 * Date: 6/22/18
 * File: Project Includes
 */

typedef struct {
  int Magic;//should be 0xAA55
  bool isOperational;//sprinker system is operational
  int A_minutes[6];//minutes per zone
  int B_minutes[6];
  char A_hhmm[7][6];//daily start times in 24hr notation
  char B_hhmm[7][6];
  bool isRain;//disable during Rain
  bool isWind;//disable during wind
  int wind_mph;
  int A_temp;
  int B_temp;
} TParameters;

extern TParameters Parameters;
extern char icon_url[],weather_string[],observation_time[],WeatherBuf[];
extern float temp_f,wind_mph,precip_today_in,high_temp;
extern bool sprinklers[],manual[],isRain;
extern int DOW,Minute,Hour,Second,StateA,StateB,MinutesA,MinutesB,ZoneA,ZoneB,SystemState;

extern void WebInit(void);
extern void WebTask(bool restart);
extern void WeatherInit(void);
extern void WeatherMinute(void);
extern void WeatherTask(void);
