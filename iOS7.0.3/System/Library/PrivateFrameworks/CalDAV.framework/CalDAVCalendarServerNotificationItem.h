/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CoreDAVItem* _content;

}

@property (retain) CoreDAVLeafItem * dtstamp;              //@synthesize dtstamp=_dtstamp - In the implementation block
@property (retain) CoreDAVItem * content;                  //@synthesize content=_content - In the implementation block
-(id)dtstamp;
-(void)setDtstamp:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)content;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)setContent:(id)arg1 ;
@end

