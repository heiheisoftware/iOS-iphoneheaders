/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface __NSSetI : NSSet {

	unsigned _used : 26;
	unsigned _szidx : 6;

}
+(id)__new:(const id*)arg1 :(unsigned)arg2 :(char)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 count:(unsigned)arg2 ;
-(double)clumpingFactor;
-(double)clumpingInterestingThreshold;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS15*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)member:(id)arg1 ;
-(void)finalize;
@end
