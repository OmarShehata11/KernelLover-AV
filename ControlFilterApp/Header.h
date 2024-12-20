#pragma once

// SOME DEFINE
#define KL_MAX_FILE_PATH_LENGTH 2048

typedef struct _KL_SCAN_REQUEST_DATA
{
	wchar_t FilePath[KL_MAX_FILE_PATH_LENGTH];
}KL_SCAN_REQUEST_DATA, * PKL_SCAN_REQUEST_DATA;

typedef struct _KL_SCAN_RESULT
{
	BOOLEAN isInfected;
}KL_SCAN_RESULT, * PKL_SCAN_RESULT;



typedef struct _KL_SCAN_SEND_TO_KERNEL
{
	FILTER_REPLY_HEADER replyHeader;
	KL_SCAN_RESULT		scanResult;
}KL_SCAN_SEND_TO_KERNEL, *PKL_SCAN_SEND_TO_KERNEL;

typedef struct _SCANNER_THREAD_CONTEXT {

	HANDLE Port;
	HANDLE Completion;
	int ThreadId;
	HANDLE hPipe;

} SCANNER_THREAD_CONTEXT, * PSCANNER_THREAD_CONTEXT;