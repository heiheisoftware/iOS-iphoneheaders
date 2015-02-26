/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/NSCoding.h>

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSCoding> {

	ICSDateValue* _start;
	ICSDateValue* _end;
	ICSDuration* _duration;

}
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(BOOL)isDurationBased;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)duration;
-(id)start;
-(id)end;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(id)initWithStart:(id)arg1 duration:(id)arg2 ;
-(id)initWithStart:(id)arg1 ;
@end
