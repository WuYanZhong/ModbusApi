﻿#ifndef UTIL_H
#define UTIL_H

#define _MODBUS_TCP_CHECKSUM_LENGTH    0
#define _MODBUS_TCP_HEADER_LENGTH      7
#define _MODBUS_TCP_PRESET_REQ_LENGTH 12
#define _MODBUS_TCP_PRESET_RSP_LENGTH  8

#define MODBUS_FC_READ_COILS                0x01
#define MODBUS_FC_READ_DISCRETE_INPUTS      0x02
#define MODBUS_FC_READ_HOLDING_REGISTERS    0x03
#define MODBUS_FC_READ_INPUT_REGISTERS      0x04
#define MODBUS_FC_WRITE_SINGLE_COIL         0x05
#define MODBUS_FC_WRITE_SINGLE_REGISTER     0x06
#define MODBUS_FC_READ_EXCEPTION_STATUS     0x07
#define MODBUS_FC_WRITE_MULTIPLE_COILS      0x0F
#define MODBUS_FC_WRITE_MULTIPLE_REGISTERS  0x10
#define MODBUS_FC_REPORT_SLAVE_ID           0x11
#define MODBUS_FC_MASK_WRITE_REGISTER       0x16
#define MODBUS_FC_WRITE_AND_READ_REGISTERS  0x17

#define MODBUS_BROADCAST_ADDRESS		   0

#define _MIN_REQ_LENGTH					   1024
#define MODBUS_MAX_WRITE_BITS              1968
#define MAX_MESSAGE_LENGTH				   260

#define MODBUS_MAX_READ_REGISTERS          125
#define MODBUS_MAX_WRITE_REGISTERS         123
#define MODBUS_MAX_WR_WRITE_REGISTERS      121
#define MODBUS_MAX_WR_READ_REGISTERS       125

#define CMD_INDEX						   5
#define TITLE_LENGTH					   6
#define INIT_BUFFER_LENGTH				   1024
#define MODBUS_TCP_MAX_ADU_LENGTH		   260
#define MODBUS_RET_ERROR					-1
#define MODBUS_RET_OK						0
#define MODBUS_RESPON_TIMEOUT				10000 // 50000微妙 50ms
#define MODBUS_REQUEST_TIMEOUT				10000 // 50000微妙 50ms

enum ERRORFLAG
{
    ERRORFLAG_NONE = 0,
    ERRORFLAG_CONNECT = 1,
    ERRORFLAG_WRITE = 2,
    ERRORFLAG_READ = 3,
    ERRORFLAG_CHECKINFO = 4,
    ERRORFLAG_RECV_TIMEOUT = 5,
    ERRORFLAG_INIT_SOCKETFD = 6,
    ERRORFLAG_MAX = 65535
};
enum RecvMsgStep
{
    RecvMsgStep_None = 0,
    RecvMsgStep_Func = 1,
    RecvMsgStep_Meta = 2,
    RecvMsgStep_Data = 3
};

enum MsgDirection
{
    Request = 1,
    Response = 2
};

#ifdef DLL_EXPORTS
#define EXPORTS_DEMO __declspec( dllexport )
#else
#define EXPORTS_DEMO __declspec(dllimport)
#endif

#endif // UTIL_H
