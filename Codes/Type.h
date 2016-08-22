#ifndef _Type_h_
#define _Type_h_

#include <cstdint>

typedef unsigned char uchar_t;
typedef unsigned int uint_t;

typedef uint32_t Ipv4;
typedef uint16_t UdpPort;

typedef uint16_t EventId;
typedef uint32_t MovieId;
typedef uint16_t Pid;
typedef uint32_t PosterId;
typedef uint16_t ServiceId;
typedef uint16_t TsId;      //Transport Stream Id
typedef uint32_t TableIndex;     //Index field type of database table.

#define InvalidMovieId    0
#define InvalidPosterId   0
#define InvalidServiceId  0
#define InvalidTsId       0
#define InvalidTableIndex 0

//typedef std::chrono::system_clock::time_point TimePoint;
//typedef std::chrono::seconds Seconds;
typedef uint64_t TimePoint;
typedef uint64_t Seconds;
typedef uint64_t Milliseconds;
typedef uint64_t Microseconds;

#endif