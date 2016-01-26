#ifndef CGADGETRON_INTERFACE
#define CGADGETRON_INTERFACE

void* copyOfObject(void* ptr);
void deleteObject(void* ptr);
void* newDataHandle();
void deleteDataHandle(void* ptr);
int executionStatus(const void* ptr);
const char* executionError(const void* ptr);
const char* executionErrorFile(const void* ptr);
int executionErrorLine(const void* ptr);
void* newTextPrinter(const char* stream);
void* newTextWriter(const char* stream);
void openChannel(int channel, void* ptr_w);
void closeChannel(int channel, void* ptr_w);
void setWriter(void* ptr_w, int channel);
void resetWriter();
void deleteTextPrinter(void* ptr);
void deleteTextWriter(void* ptr_w);
void* newMexPrinter();
void deleteMexPrinter(void* ptr);

#endif
