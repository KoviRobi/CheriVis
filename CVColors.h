#include "cheritrace/disassembler.hh"
#import <AppKit/NSColor.h>

@interface CVColors : NSObject
/**
 * The colour used for instructions that touch memory (loads and stores).
 */
+ (NSColor*)memoryInstructionColor;
/**
 * The colour used for instructions that control the flow of execution (jumps
 * and branches).
 */
+ (NSColor*)flowControlInstructionColor;
/**
 * Returns the colour that corresponds to the specified instruction type.
 */
+ (NSColor*)colorForInstructionType: (cheri::disassembler::instruction_info::instruction_type)aType;
/**
 * The colour to use for memory addresses that are in the kernel.
 */
+ (NSColor*)kernelAddressColor;
/**
 * The colour to use for memory addresses that are in userspace.
 */
+ (NSColor*)userspaceAddressColor;
/**
 * The colour to use for register values that are currently undefined.
 */
+ (NSColor*)undefinedRegisterValueColor;
@end
