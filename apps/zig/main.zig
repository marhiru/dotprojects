const std = @import("std");
const expect = std.testing.expect;

const variableType = enum {
    junior,
};

const variable = union(variableType) {
    junior: []const u8,
};

test "executes union_variable" {
    const u = variable{
        .junior = "Juniores",
    };

    try expect(@as(variableType, u) == variableType.junior);
}

pub fn main() void {
    const print = std.debug.print;

    print("Olá, mundo via Zig!\n", .{});
}
