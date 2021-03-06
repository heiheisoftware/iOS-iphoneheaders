/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUISearchResultGroupControllerDelegate;
@class SKUISearchResultGroup, NSOperationQueue, SKUIClientContext, NSMutableIndexSet, NSMutableArray, NSMutableDictionary, NSIndexSet;

@interface SKUISearchResultGroupController : NSObject {

	SKUISearchResultGroup* _resultGroup;
	id<SKUISearchResultGroupControllerDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	SKUIClientContext* _clientContext;
	NSMutableIndexSet* _itemIndexesToLoad;
	NSMutableIndexSet* _editorialIndexesToLoad;
	NSMutableIndexSet* _editorialArtworkIndexesToLoad;
	NSMutableIndexSet* _appBundleChildrenIndexesToLoad;
	NSMutableArray* _appBundleArtworkIndexPathsToLoad;
	NSMutableDictionary* _appBundleArtworkByIndexPaths;
	NSMutableDictionary* _artworksByIndex;
	NSMutableDictionary* _itemArtworkContextsBySize;
	NSIndexSet* _onScreenIndexes;
	NSMutableIndexSet* _removedIndexes;

}

@property (assign,nonatomic,__weak) id<SKUISearchResultGroupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                                      //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) int numberOfEntities; 
-(void)dealloc;
-(void)setDelegate:(id<SKUISearchResultGroupControllerDelegate>)arg1 ;
-(id<SKUISearchResultGroupControllerDelegate>)delegate;
-(id)itemAtIndex:(unsigned)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_reloadIndexesToLoad;
-(void)_loadMore;
-(id)entityAtIndex:(unsigned)arg1 ;
-(id)_editorialAtIndex:(unsigned)arg1 ;
-(id)_itemAtIndex:(unsigned)arg1 ;
-(id)_identifierAtIndex:(unsigned)arg1 ;
-(int)entityTypeAtIndex:(int)arg1 ;
-(int)numberOfEntities;
-(id)_itemArtworkContextForCount:(int)arg1 ;
-(void)_loadItemsAtIndexes:(id)arg1 childrenAtIndexes:(id)arg2 ;
-(void)_loadItemArtworkAtIndexPath:(id)arg1 ;
-(void)_loadEditorialAtIndex:(unsigned)arg1 ;
-(void)_loadArtworkAtIndex:(unsigned)arg1 ;
-(void)_setItemResponse:(id)arg1 error:(id)arg2 forIndexes:(id)arg3 childrenAtIndexes:(id)arg4 ;
-(void)_setEditorialResponse:(id)arg1 error:(id)arg2 forIndex:(unsigned)arg3 ;
-(void)_setArtworkResponse:(id)arg1 error:(id)arg2 forIndex:(unsigned)arg3 ;
-(void)_setItemArtworkResponse:(id)arg1 error:(id)arg2 forIndexPath:(id)arg3 ;
-(id)initWithSearchResultGroup:(id)arg1 clientContext:(id)arg2 ;
-(id)editorialAtIndex:(unsigned)arg1 ;
-(id)editorialArtworkAtIndex:(unsigned)arg1 ;
-(id)identifierAtIndex:(unsigned)arg1 ;
-(void)updateForVisibleIndexes:(id)arg1 ;
-(id)itemArtworkAtIndex:(unsigned)arg1 subindex:(unsigned)arg2 ;
@end

