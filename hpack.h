#define HPACK_ERROR_NO_ERR (0)
#define HPACK_ERROR_NO_MEMORY (-1)
#define HPACK_ERROR_DECODE_ERROR (-2)

int hpack_decode(uint8_t *, size_t, uint8_t *, size_t);
int hpack_encode(uint8_t *, size_t, uint8_t *, size_t, size_t *);