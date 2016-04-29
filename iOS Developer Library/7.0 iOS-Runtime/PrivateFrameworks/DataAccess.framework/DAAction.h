/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface DAAction : NSObject <NSCoding> {
     /* Encoded args for previous method: ^{ASToDo=#@@ii@i@?i@}8@0:4 */
     /* Encoded args for previous method: ^{ASEvent=#@@ii@i@?i@}8@0:4 */
     /* Encoded args for previous method: ^{ASNote=#@@ii@i@?i@}8@0:4 */
     /* Encoded args for previous method: ^{ASContact=#@@ii@i@?i@}8@0:4 */
    int _changeId;
    id _changedItem;
    int _itemChangeType;
    id _serverId;
}

@property int changeId;
@property(retain) id changedItem;
@property int itemChangeType;
@property(retain) id serverId;

- (void).cxx_destruct;
- (void)_setChangedItem:(id)arg1;
- (int)changeId;
- (id)changedItem;
- (struct ASContact { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)contact;
- (id)deletedContactID;
- (id)deletedEventID;
- (id)deletedNoteID;
- (id)deletedToDoID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct ASEvent { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)event;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)itemChangeType;
- (id)message;
- (struct ASNote { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)note;
- (id)serverId;
- (void)setChangeId:(int)arg1;
- (void)setItemChangeType:(int)arg1;
- (void)setServerId:(id)arg1;
- (id)stringForItemChangeType:(int)arg1;
- (struct ASToDo { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; int x10; id x11; }*)toDo;

@end