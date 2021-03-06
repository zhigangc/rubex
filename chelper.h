#include <oniguruma.h>
#include <stdint.h>

extern int NewOnigRegex( char *pattern, int pattern_length, int option,
                                  OnigRegex *regex, OnigRegion **region, OnigEncoding *encoding, OnigErrorInfo **error_info, char **error_buffer);

extern int SearchOnigRegex( void *str, int str_length, int offset, int option,
                                  OnigRegex regex, OnigRegion *region, OnigErrorInfo *error_info, char *error_buffer, int64_t *captures, int64_t *numCaptures);

extern int MatchOnigRegex( void *str, int str_length, int offset, int option,
                  OnigRegex regex, OnigRegion *region);

extern int LookupOnigCaptureByName(char *name, int name_length, OnigRegex regex, OnigRegion *region);

extern int GetCaptureNames(OnigRegex regex, void *buffer, int bufferSize, int32_t* groupNumbers);
