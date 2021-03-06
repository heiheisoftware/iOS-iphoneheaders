/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem {

	CoreDAVLeafItem* _status;
	CoreDAVItem* _prop;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                                 //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;                       //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVLeafItem *)status;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVErrorItem *)errorItem;
-(CoreDAVLeafItem *)responseDescription;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
@end

