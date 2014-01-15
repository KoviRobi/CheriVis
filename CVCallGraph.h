#import <Foundation/NSObject.h>

@class CVStreamTrace;
@class CVAddressMap;

/**
 * The CVCallGraph class encapsulates a call graph reconstructed from the
 * stream trace.
 */
@interface CVCallGraph : NSObject
/**
 * Build a new call graph using the specified stream trace and call graph.
 */
- (id)initWithStreamTrace: (CVStreamTrace*)aTrace
               addressMap: (CVAddressMap*)anAddressMap
      functionLookupBlock: (CVFunction*(^)(uint64_t))lookupBlock;
@end

