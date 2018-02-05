// Decompiled Web Assembly generated by wasmdec. Preamble:
#include <stdint.h> // For the bit size specific types
#include <math.h> // For certian WASM operations
typedef const char* wasm_table_t; // WASM tables
// Bit size specific types not declared in stdint.h:
typedef float float32_t;
typedef double float64_t;
// C implementation of WASM expressions:
unsigned int _rotl(const unsigned int value, int shift) {
	if ((shift &= sizeof(value) * 8 - 1) == 0)
		return value;
	return (value << shift) | (value >> (sizeof(value)*8 - shift));
}
unsigned int _rotr(const unsigned int value, int shift) {
	if ((shift &= sizeof(value) * 8 - 1) == 0)
		return value;
	return (value >> shift) | (value << (sizeof(value)*8 - shift));
}
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
// Host functions: used to request information from host machine.
extern int32_t host_has_feature(int32_t feature_opcode);
extern void host_grow_memory(int32_t size);
extern int32_t host_get_current_memory(void);
extern int32_t host_get_page_size(void);
// End of preamble

// WASM imports:
/*
	Import 'import$0':
	Module: 'env'
	Base: 'memory'
*/
extern const char* import$0; // <Imported memory>
/*
	Import 'import$1':
	Module: 'env'
	Base: 'table'
*/
extern wasm_table_t import$1; // <Imported table>
/*
	Import 'import$2':
	Module: 'env'
	Base: 'memoryBase'
*/
extern int import$2;
/*
	Import 'import$3':
	Module: 'env'
	Base: 'tableBase'
*/
extern int import$3;
/*
	Import 'import$4':
	Module: 'env'
	Base: 'DYNAMICTOP_PTR'
*/
extern int import$4;
/*
	Import 'import$5':
	Module: 'env'
	Base: 'tempDoublePtr'
*/
extern int import$5;
/*
	Import 'import$6':
	Module: 'env'
	Base: 'ABORT'
*/
extern int import$6;
/*
	Import 'import$7':
	Module: 'global'
	Base: 'NaN'
*/
extern double import$7;
/*
	Import 'import$8':
	Module: 'global'
	Base: 'Infinity'
*/
extern double import$8;
/*
	Import 'abortStackOverflow':
	Module: 'env'
	Base: 'abortStackOverflow'
*/
extern void abortStackOverflow(int local_0)
/*
	Import '_printf':
	Module: 'env'
	Base: '_printf'
*/
extern int _printf(int local_0, int local_1)
// WASM globals:
int global$0 = import$4;
int global$1 = import$5;
int global$2 = import$6;
int global$3 = 0;
int global$4 = 0;
int global$5 = 0;
int global$6 = 0;
int global$7 = 0;
int global$8 = 0;
double global$9 = import$7;
double global$10 = import$8;
int global$11 = 0;
int global$12 = 0;
int global$13 = 0;
int global$14 = 0;
double global$15 = 0.000000;
int global$16 = 0;
float global$17 = 0.000000;
float global$18 = 0.000000;

// WASM functions:

/*
	Function '$stackAlloc'
	Local variables: 1
	Parameters: 1
*/
int fn_stackAlloc(int local_0) {
	// Parsed WASM function locals:
	int local_1 = 0; // Local with index '1'

	local_1 = global$3;
	global$3 = global$3 + local_0;
	global$3 = global$3 + 15 && -16;
	if (global$3 >= global$4) {
	abortStackOverflow(local_0);

	} // <No else block>
	return local_1;
}
/*
	Function '$stackSave'
	Local variables: 0
	Parameters: 0
*/
int fn_stackSave() {
	// Function contains no non-parameter locals
	return global$3;
}
/*
	Function '$stackRestore'
	Local variables: 0
	Parameters: 1
*/
void fn_stackRestore(int local_0) {
	// Function contains no non-parameter locals
	global$3 = local_0;
}
/*
	Function '$establishStackSpace'
	Local variables: 0
	Parameters: 2
*/
void fn_establishStackSpace(int local_0, int local_1) {
	// Function contains no non-parameter locals
	global$3 = local_0;
	global$4 = local_1;
}
/*
	Function '$setThrew'
	Local variables: 0
	Parameters: 2
*/
void fn_setThrew(int local_0, int local_1) {
	// Function contains no non-parameter locals
	if (global$5 == 0) {
	global$5 = local_0;
	global$6 = local_1;

	} // <No else block>
}
/*
	Function '$_main'
	Local variables: 11
	Parameters: 2
*/
int fn__main(int local_0, int local_1) {
	// Parsed WASM function locals:
	int local_2 = 0; // Local with index '2'
	int local_3 = 0; // Local with index '3'
	int local_4 = 0; // Local with index '4'
	int local_5 = 0; // Local with index '5'
	int local_6 = 0; // Local with index '6'
	int local_7 = 0; // Local with index '7'
	int local_8 = 0; // Local with index '8'
	int local_9 = 0; // Local with index '9'
	int local_10 = 0; // Local with index '10'
	int local_11 = 0; // Local with index '11'
	int local_12 = 0; // Local with index '12'

	local_12 = global$3;
	global$3 = global$3 + 48;
	if (global$3 >= global$4) {
	abortStackOverflow(48);

	} // <No else block>
	local_10 = local_12 + 24;
	local_9 = local_12 + 16;
	local_8 = local_12 + 8;
	local_7 = local_12;
	local_2 = 0;
	local_3 = local_0;
	local_4 = local_1;
	local_5 = 42;
	local_6 = local_5;
				}
	/* Drop routine */
					_printf(import$2 + 0, local_7);
	/* End of drop routine */
					break;	/* Drop routine */
				_printf(import$2 + 5, local_8);
	/* End of drop routine */
				break;	/* Drop routine */
			_printf(import$2 + 10, local_9);
	/* End of drop routine */
			break;	/* Drop routine */
	_printf(import$2 + 22, local_10);
	/* End of drop routine */
	global$3 = local_12;
	return 0;
}
/*
	Function '$runPostSets'
	Local variables: 1
	Parameters: 0
*/
void fn_runPostSets() {
	// Parsed WASM function locals:
	int local_0 = 0; // Local with index '0'

	// <Nop expression>
}
/*
	Function '$__post_instantiate'
	Local variables: 0
	Parameters: 0
*/
void fn___post_instantiate() {
	// Function contains no non-parameter locals
	global$3 = import$2 + 32;
	global$4 = global$3 + 5242880;
	fn_runPostSets();
}

/*
	Exported WASM functions:
	Function 'fn___post_instantiate':
		WASM name: '__post_instantiate'
		Export name: '__post_instantiate'

	Function 'fn__main':
		WASM name: '_main'
		Export name: '_main'

	Function 'fn_runPostSets':
		WASM name: 'runPostSets'
		Export name: 'runPostSets'

*/
